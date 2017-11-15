// CFG Construction Test - GOTO
main()
{
   // unique variables to help identify which branch is which
   int case1, case2, skip, test;
   switch (test)
   {
	  case 1:
	  {
		  test = case1;
	  }
	  break;

	  case 2:
		  // no braces
		  skip = case2;
		  goto SKIP;
	  break;
   }
   // use of test in return expression
   return test;

   SKIP:
	  return skip;
}
