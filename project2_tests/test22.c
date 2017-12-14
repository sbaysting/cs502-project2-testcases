void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void add(int* a, int* b) {
	int temp = *a + *b;
	*a = 0;
	swap(a, &temp);
}
int main() {
	int a, b;
	swap(&a, &b);
	add(&a, &b);
	return 0;
}