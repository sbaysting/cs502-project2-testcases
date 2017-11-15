foo()
{
	int a;
	int b;
	if(a = 3)
		b = 3;
	printf("%d\n", b);
	printf("%d\n", a);
	return (a = a + b);
}

main()
{
}
