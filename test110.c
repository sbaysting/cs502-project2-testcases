// Test of assignment in expression - the teaching staff have confirmed that
// such cases are NOT in the grading suite.
main()
{
   int a,b,c;

   switch (a = b = c)
	{
	case 1:
	   a = 1;
	break;

	case 2:
	   b = 1;
	break;

	case 3:
	   c = 1;
	break;
	}

}
