int fib(int n) {
	if(n == 1 || n == 2)
		return n;
	return fib(n-1) + fib(n-2);
}

int main() {
	int num;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	int n = fib(num);
	printf("%dth fibonacci number is %d\n", num, n);
	return 0;
}