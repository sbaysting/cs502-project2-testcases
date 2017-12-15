int global;

// Make sure that the p gets on the use summary for f1
// This should report global as an uninitialized use
int f1(int *p) {

    int t = 1;
    if (t > 0)
    {
	t = f1(p);
    }
    else
    {
    	*p = global;
    }

    return t;
}

int main() {

    int a;

    int b;

    a = f1(&b);
    return a + b;
}


 

