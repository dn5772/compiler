void get_token();
float expression();
int ifunc(int, ...);
char cfunc(char c, int i);

// function_defination
void main()
{//compound_statement
	// Declaration
	static float sf;
	const cc= ' ';
	int i1, i2, i3 = 1;	// comma, init_declarator cheack
	
	//struct specifier
	typedef struct strct_IDEN { 
		const int sa, sb;
		int *sc;
	} s1;
	union {int ui;} u1;
	struct strct_IDEN s2;
	
	//enun specifier
	enum enumer_IDEN {Null,INT,FLOAT=10,PLUS,STAR,LP,RP,END} e1;
	enum enumer_IDEN e2;

	//Declarator, pointer, direct_decla
	int *p;
	int* *const pp;
	int *parr[5];

	//Parameter_type_list and Abstract_declarator
	float *pffunc();
	int ifunc(int, ...);
	char cfunc(char c, int i);

	//Statement
	if (1){ int i; }
	switch (i1>i2){
		// jump statement
		case 1:
			return;
		case 2:
			break;
	}
	while (1){}
	for (i1=0; i1<5; i1++){
		continue;
	}
	//Expression
	cc; "string"; parr[1]; i1++; s2.sa; //primary, postfix
	i1&i2; sizeof(sf); (!sf);			//unary
	i1*i2; i2%i3; i1+i2; i1<<i2;		//arithmetic
	i1<i2; i1<=i2; i1==i2; 				//relational, equality
	i1&&i2; i1^i2; i2|i3;				//logical
	i1||i2 ? i3-- : i3++;				//conditional
	if(1){} if(1){} else{}
}