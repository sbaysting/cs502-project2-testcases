void foo1(int* r1, int* r2){
  int temp = *r1;
  *r1 = *r2;
  *r2 = temp;
}

int main()
{
  int a,b,c;
  int r1,r2,r3;
  a = 10;
  b = a+10;
  //r1 = (a>=b) || (b<=c) && (c!=a);
  //r2 = !r1;
  //r3 = ((a+b)*10-(a-c)*200)*2;
  foo1(&r1, &r2);
  printf("%d %d %d\n", r1, r2, r3);
  return 0;
}

