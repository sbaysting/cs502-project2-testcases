
void foo(int i)
{
   int a;
   int b;
   if (i) a = 1;
   printf("a = %d", a);
   if (i) b = 1;
   else b = 2;
   printf("b = %d", b);
}
main()
{
   foo(0);
}

