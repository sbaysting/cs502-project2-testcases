// Test case as per @368
int f1(int *p){

    *p = 1;
    return 0;
}

int f2(int *p) {

    int t;

    t = *p;
    return t;
}

int main() {

    int a;

    int b;

    a = f1(&b) + f2(&b);
    return a;
}


 

