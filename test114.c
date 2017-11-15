// Test of code with implicit type conversion - looking for tree codes I may have missed
main()
{
   int a,b,c;
   float x,y,z;

   a = 1; b = 2; c = 3;
   x = 1.0; y = 2.0; z = 3.0;

   int res_int;
   float res_flt;

   res_int = a + x; // int = int + float
   res_int = a*x;   // int = int * float
   res_int = a/x;   // int = int / float
   res_int = x/a;   // int = float/int

   res_flt = b + y; // float = int + float
   res_flt = b*y;   // float = int * float 
   res_flt = b/y;   // float = int / float
   res_flt = y/b;   // float = float / int

   res_int = z;
   res_flt = c;
}
