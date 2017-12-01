int a;
int b;
int c;

void foo(int x){
	if(x > 0){
		a = x;
		foo(x - 1);
	}
	b = x - 1;
	c = b + x;
	return;
}

void main(){
	foo(10);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
}