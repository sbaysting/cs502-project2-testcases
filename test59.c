
void foo(int i)
{
   int a;
   int b;
   if (i < 0)
   {
	   a = 10;
	   if (i > -5) b = 1;
	   else b = 0;
   }
   else
   {
	   a = 2;
	   b = 10;
   }
   printf("a = %d, b = %d", a, b);
}
main()
{
	int c;
	int d = 0;
	if (d == 1) c = foo(0);
	printf("c = %d", c);
}

