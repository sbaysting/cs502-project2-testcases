void init(int* a, int* b) {
	*a = 10;*b = 10;
}
int main() {
	int *a, *b;
	init(a, b);
	printf("%d, %d", *a, *b);
	return 0;
}