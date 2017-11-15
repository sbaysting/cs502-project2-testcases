main()
{
	int a, b;
	float c, d;
	char e, f;
	switch(a*b / f) {
		case 0:
			c = d = 0;
		case 1:
			c = d = e = 1;
		case 2:
			c = d = 2;
	}
	printf("%d, %d, %d", c, d, e);
}
