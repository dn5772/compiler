int a=0, b=1;
int func ();

struct s;
struct t {
	struct s *f;
};
struct s {
	int a;
}ss;

int func (int c, ...){
	int a;
	{
		int a = 1;
		{
			int a = 2;
			{		
				int a = 3;
				a = 10;
			}
		}
	}
	int b;
	return 0;
}