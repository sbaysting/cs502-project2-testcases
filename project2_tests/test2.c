void init(int *p, int x, int *q) {*p =1; if (x<0) *q=0;}
int foo(int a){
int i, b;
init(&i, a, &b);
if (i) {b=0;}
printf("%d", a+b);
}