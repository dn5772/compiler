#include <stdio.h>
#include <stdlib.h>

float num=0.0;
char c= ' ';

enum {Null,INT,FLOAT,PLUS,STAR,LP,RP,END} token;

void get_token();
float expression();
float term();
float factor();
void error (int);


int main(){
	float result;
	get_token();
	result=expression();
	if (token!=END)
		error(3);
	else
		printf("%.4f \n",result);
	return 0;
}

float expression() {
	float result;
	result=term();

	while (token==PLUS){
		get_token();
		result=result+term();
	}

	return (result);
}

float term() {
	float result;
	result=factor();

	while (token==STAR){
		get_token();
		result=result*factor();
	}

	return (result);
}

float factor() {
	float result;
	if (token==INT || token==FLOAT) {
		result=num;
		get_token();
	}
	else if (token==LP) {
		get_token();
		result=expression();
		if (token==RP)
			get_token();
		else
			error(2);
	}
	else
		error(1);

	return (result);
}

void get_token () {
	int i = 0;
	float f = 0.0;
	float a = 0.1;

	while (c == ' '){
		c = getchar();
	}

	if (c == '+'){
		token = PLUS;
		c = ' ';
	}
	else if (c == '*'){
		token = STAR;
		c = ' ';
	}
	else if (c == '('){
		token = LP;
		c = ' ';
	}
	else if (c == ')'){
		token = RP;
		c = ' ';
	}
	else if ((c=='\n') || (c==EOF)){
		token = END;
	}
	else if ('0'<= c && c <= '9'){
		while ('0'<= c && c <= '9'){
			i = i*10+c-'0';
			c = getchar();
		}
		if (c=='.'){
			c=getchar();
			while ('0'<= c && c <= '9'){
				f = f + (c-'0')*a;
				a/=10.0;
				c=getchar();
			}
		}
		if (0.0<f){
			token = FLOAT;
		}
		else {token = INT;}
		num = i + f;
	}
	printf("%d\n", token);
}

void error (int i) {
	switch (i) {
		case 1:
			printf("expression error: factor error\n");
			break;
		case 2:
			printf("expression error: parenthesis error\n");
			break;
		case 3:
			printf("expression error: expression is not finished\n");
			break;
	}
	exit(1);
}