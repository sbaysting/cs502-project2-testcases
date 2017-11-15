// CFG Construction Test - switch cases
int foo(int i, int j)
{
   // unique variables to help identify which branch is which
   int case1, case2, case3, case4, case5, case6, test;
   switch (test)
   {
      case 1:
      {
    	  // general case
    	  test = case1;
      }
   	  break;

      case 2:
    	  // no braces
    	  test = case2;
      break;

      case 3:
    	  // short circuit return
    	  test = case3;
    	  return test;
      break;

      case 4:
    	  // fallthrough
    	  test = case4;
      case 5:
    	  test = case5;
      break;

      default:
    	  test = case6;
      break;
   }
   // use of test in return expression
   return test;
}

main()
{
   int x1, x2, ret;
   ret = foo(x1 + x2, 1);

}

