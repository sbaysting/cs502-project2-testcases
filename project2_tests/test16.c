// This is a nested test case where a variable sent by caller is used in callee of callee
// And another variable is defined in callee.
void foo1(int* r1, int* r2);
int foo2(int* x2);

void foo1(int* r1, int* r2){
  int x,k;
  x = foo2(r1);
  *r2 = (x+x)/k;
}


int foo2(int* x2){
  int x3;
  x3 = x3+*x2;
  return x3;
  }

int main()
{
  int a,b,c;
  int* r1,*r2,r3;
  a = 10;
  b = a+10;
  //r1 = (a>=b) || (b<=c) && (c!=a);
  //r2 = !r1;
  //r3 = ((a+b)*10-(a-c)*200)*2;
  foo1(r1, r2);
  printf("%d\n", r3);
  return 0;
}

