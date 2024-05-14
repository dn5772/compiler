#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

typedef struct num{
	enum {INT, FLOAT} type;
	int i;
	float f;
} num;

int action[12][6] = {
	{5,0,0,4,0,0}, {0,6,0,0,0,ACC}, {0,-2,7,0,-2,-2}, {0,-4,-4,0,-4,-4}, {5,0,0,4,0,0}, {0,-6,-6,0,-6,-6},
	{5,0,0,4,0,0}, {5,0,0,4,0,0}, {0,6,0,0,11,0}, {0,-1,7,0,-1,-1}, {0,-3,-3,0,-3,-3}, {0,-5,-5,0,-5,-5}
};
int go_to[12][3] = {
	{1,2,3}, {0,0,0}, {0,0,0}, {0,0,0}, {8,2,3}, {0,0,0},
	{0,9,3}, {0,0,10}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
};
int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_legth[7] = {0, 3, 1, 3, 1, 3, 1};

int stack[1000]; int top = -1; int sym;
num value[1000]; num yyval;

void yyerror(int i){
	switch (i) {
		case 1:
			printf("syntax error: token error\n");
			break;
		case 2:
			printf("syntax error: reduce error\n");
			break;
		case 3:
			printf("syntax error: expression is not finished\n");
			break;
		case 4:
			printf("syntax error: float error\n");
			break;
		default:
		printf("syntax error\n");
	}
	exit(1);
}
int yylex (){
	static char ch=' ';
	int i = 0;
	float f = 0.0;
	float a = 0.1;
	while (ch==' '||ch=='\t'||ch=='\n'){
		ch = getchar();
	}
	if(isdigit(ch)){
		do{
			i = i*10+ch-'0';
			ch = getchar();
		}
		while(isdigit(ch));
		if (ch=='.'){
			ch = getchar();
			if (!isdigit(ch)) yyerror(4);
			do{
				f = f + (ch-'0')*a;
				a/=10.0;
				ch=getchar();
			}
			while (isdigit(ch));
		}
		if (0.0<f){
			yyval.type = FLOAT;
			yyval.f = i+f;
		}
		else {
			yyval.type = INT;
			yyval.i = i;
		}
		return(NUMBER);
	}
	else if (ch=='+'){ch=getchar(); return(PLUS);}
	else if (ch=='*'){ch=getchar(); return(STAR);}
	else if (ch=='('){ch=getchar(); return(LPAREN);}
	else if (ch==')'){ch=getchar(); return(RPAREN);}
	else if (ch==EOF){ch=getchar(); return(END);}
	else yyerror(1);
}

void push(int i){
	stack[++top] = i;
}
void shift(int i){
	push(i);
	value[top] = yyval;
	sym=yylex();
}
void reduce(int i){
	int old_top;
	top -= prod_legth[i];
	old_top = top;
	push(go_to[stack[old_top]][prod_left[i]]);
	switch (i){
	case 1:
		if (value[old_top+1].type==value[old_top+3].type){
			value[top].type = value[old_top+1].type;
			value[top].i = value[old_top+1].i+value[old_top+3].i;
			value[top].f = value[old_top+1].f+value[old_top+3].f;
		}
		else if (value[old_top+1].type == INT){			// INT + FLOAT
			value[top].type = FLOAT;
			value[top].f = value[old_top+1].i+(float)value[old_top+3].f;
		}
		else {
			value[top].type = FLOAT;
			value[top].f = (float)value[old_top+1].f+value[old_top+3].i;
		}
		break;
	case 2:
		value[top]=value[old_top+1];
		break;
	case 3:
		if (value[old_top+1].type==value[old_top+3].type){
			value[top].type = value[old_top+1].type;
			value[top].i = value[old_top+1].i*value[old_top+3].i;
			value[top].f = value[old_top+1].f*value[old_top+3].f;
		}
		else if (value[old_top+1].type == INT){			// INT * FLOAT
			value[top].type = FLOAT;
			value[top].f = (float)value[old_top+1].i * value[old_top+3].f;
		}
		else {											// FLOAT * INT
			value[top].type = FLOAT;
			value[top].f = value[old_top+1].f * (float)value[old_top+3].i;
		}
		break;
	case 4:
		value[top]=value[old_top+1];
		break;
	case 5:
		value[top]=value[old_top+2];
		break;
	case 6:
		value[top]=value[old_top+1];
		break;
	default: 
		yyerror(2);
		break;
	}
}
void yyparse(){
	int i;
	stack[++top]=0;
	sym=yylex();
	do {
		i=action[stack[top]][sym-256];
		if(i==ACC){
			if(value[top].type == INT)
				printf("\nsuccess! answer is : %d\n", value[top].i);
			else
				printf("\nsuccess! answer is : %.4f\n", value[top].f);
		}
		else if (i>0) shift(i);
		else if (i<0) reduce(-i);
		else yyerror(3);
	}
	while (i!=ACC);
}
int main(){
	yyparse();
	return 0;
}
