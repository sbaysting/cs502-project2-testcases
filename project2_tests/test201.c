float z;

// Chain of functions that pass a pointer where the leaf manipulates it.
int f1(int *p1){

    f2(p1);
    return 0;
}

void f2(int *p2) {

	f3(p2);
	return 0
}

void f3(int* p3){
	*p3 = 1;
	return 0;
}

int main() {

    int a = (int)z;

    int b;

    a = f1(&b);
    // Should show up as uninitialized use if test pointer manipulation fails
    printf("%d",b);
    return a;
}


 

