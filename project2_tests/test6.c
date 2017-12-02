void init(int *q, int* p) {
	if(*p < 0)
		*q = 1;
}

int foo(int a) {
	int i=0, b;
	init(&i, &b);
	b = 0;
	printf("%d", a+b+i);
}

int main() {
	int a;
	foo(a);
}