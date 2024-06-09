int i;
struct s { int a; struct x{int y; struct s g;} b; int c; } d;

enum t {
	a,
	b, 
	c = 23,
	d,
	e = 'e'
};

float fun (int a, int b){
	int c,d;
	{int e,f;}
}

int main(){
	// i = 10;
	int a[10];
	int b[20];
	a[0] = b[10];
	float *fp;
	int *ip;
	fp=ip;
	return 0;
}