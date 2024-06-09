int func(int , float);

int main(){
	int a;
	float b;
	func(a, b);

	return 0;
}

int func(int a, float b){
	return func(a, b);
}