int add(int* a, int* b) {
	return *a + *b;
}

int main() {
	int a, b;
	int c, d, e;
	e = add(&a, &b) + add(&c, &d);
	return 0;
}
