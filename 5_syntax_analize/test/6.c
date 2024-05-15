int main(int argc, char *argv[])
{
	int a = 1;
	switch(a) {
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
	
	if (a == 1) {a = 2;}

	int i = 0;
	
	for (i = 0; i < 10; ++i)
	{
		if (a%2) {continue;}
		else {break;}
	}
	while (i > 0) {
		i--;
	}
	return 0;
}