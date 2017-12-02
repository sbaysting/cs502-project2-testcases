int foo(int*a, int*b) {
	return 3;
}
int main() {
	int a;
	int b;
	foo(&a, &b);
	return 0;
}