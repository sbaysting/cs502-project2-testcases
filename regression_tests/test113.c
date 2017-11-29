// Test of assignment in expression - the teaching staff have confirmed that
// such cases are NOT in the grading suite.
main()
{
   int a,b,c,d;

   a = (b = c) + c;
   b = a + (c = b);
   c = (a = c) < b;
   d = ((a = c) == 1) && ((b = c) == 2);
}
