int i;
struct s { int a; struct x{int y; struct s g;} b; int c; } d;

enum t {
	a,
	b, 
	c = 23,
	d,
	e = 'e',
};

int main(){
	i = 10;

	int a[10];
	int b[20];
	a[0] = b[10];

	float *fp1, *fp2;
	int *ip;
	fp1 = fp2;
	fp2 = ip;

	return 0;
}