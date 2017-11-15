// Test of assignment in expression - the teaching staff have confirmed that
// such cases are NOT in the grading suite.
main()
{
   int a,b,c;
	
   if (c = a + (b = c))
	c = 1;
}
