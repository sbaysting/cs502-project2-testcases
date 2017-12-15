int a;
int b = 2;

void foo(int* x)
{
	*x = 1;
}

void foo2(int* y)
{
	int z;
	z = *y;
}


main()
{
	int x;
	// Test initialization of pointers through DECL_INITIAL
	int* y = &x;

	foo(y);
	// x should show up as initialized use here if pointer
	// tracking is broken
	x = x + 1;

	// uninitialized use of a
	x = a + b;

	foo2(&x);
}
