
int func1(){	
	int a = 0;
	a++;
	a--;
	a -> a;
	a.a;
	a();
}
int func2(){
	int a = 0;
	++a;--a; *a; &a;
	sizeof(a);
	(float)a;
	(char)a;
}
int func3(){
	int a = 5, b = 1;
	int AA = a || b; int BB = a && b;
	int LSS = a < b; int GTR = a > b;
	int GEQ = a >= b; int LEQ = a <= b;
	int EQL = a == b; int NEQ = a != b;
}
int func4(){
	int a, b, c, d;
	int plus = a + b;
	int minus = a - b;
	int star = a * b;
	int slash = a / b;
	a+b*c&&d;
}