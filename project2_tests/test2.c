int a = 10;
int b;
int c;

void foo(int *x, int *y){
	int b;
	b = 5 * a;
	if (b > 20){
		c = *x;
		*x = *y;
	}
	else{
		c = *y;
		*y = *x;
	}
}

void main(){
	int x;
	int y;
	x = a + 10;
	foo(&x, &y);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
}