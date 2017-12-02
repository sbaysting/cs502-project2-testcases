int max(int* a, int* b) {
	if(*a < *b)
		return *b;
	return *a;
}

int main() {
	int a;
	int b;
	max(&a, &b);
	return 0;
}