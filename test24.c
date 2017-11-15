main()
{
	int a, b;
	float c, d;
	char e, f;
	if(a && b)
	{
		printf("Both a  and b");
		a = 10;
		b = 20;
	}
	else if(c || d)
	{
		printf("C or D");
		c = 12;
		d = 23;
	}
	else if(e == f){
		e = 'e';
		f = 'f';
	}
	a = b = c = d = 10;
	e = f = 'e';
}
