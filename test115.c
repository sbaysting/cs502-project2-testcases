// Test of code with implicit type conversion - looking for tree codes I may have missed
main()
{
   int a,b,c,d;
   float w,x,y,z;

   a = 1; b = 2; c = 3; d = 4;
   w = 1.0; x = 2.0; y = 3.0; z = 4.0;

   if (w > a)
   {
       while(x == b)
       {
           switch (d = c + y)
	   {
		case 1:
                   if (z = d)
		   {
                      z = !z;
                   }
		break;
           }
       }
   }
}
