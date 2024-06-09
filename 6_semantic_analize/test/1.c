int a=0, b=1;
// int func ();

struct s { 
	int a; 
	struct s b;
} d;

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
	return 0;
}

int main(){
	return 0;
}