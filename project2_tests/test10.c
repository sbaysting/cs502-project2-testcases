//Test as per piazza thread @332
void foo(int *x) {
	int c = *x;
}

void main() {
	int y;
	foo(&y);
}