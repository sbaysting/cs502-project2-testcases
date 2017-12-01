int a;
int b;
int c;

void foo(int x){
	if(x > 0) {
		a = x;
		b = a + 1;
	}
	else {
		a = c * x;
		c = a + x;
	}
	return;
}

void main(){
	int x = 5;
	int y = 7;
	int z;
	if (x < y) c = y - x;
	else
	{
		c = x - y;
		z = x * y;
	}
	foo(z);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
}