// Sequential test of all operators
// If any required tree codes are not supported, there will be 
// uninitialized variables reported in the output.
main()
{
   int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p = 1;
   o = p;
   n = o || p;
   m = o && n;
   l = !m;
   k = (m == l);
   j = (l != k);
   i = (k < j);
   h = (j > i);
   g = (i <= h);
   f = (h >= g);
   e = g + f;
   d = f - e;
   c = e * d;
   b = d / c;
   a = b;   
}
