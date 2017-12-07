void foo1(int* r1, int* r2){
  int temp = *r1;
  *r1 = *r2;
  *r2 = temp;
}

int main()
{
  int a,b,c;
  int* r1, *r2,r3;
  a = 10;
  b = a+10;
  foo1(r1, r2);
  return 0;
}