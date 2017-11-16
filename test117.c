int foo(int x)
{
    int a;
    if (x)
    {
        int a = 2;
    }
    else
    {
        a = 3;
    }

    return x + a + 2.0;
}

int main()
{
    int c;
    int d;
    int b;
    int a;

    a++;
    a = 3;

    {
        int a = 2;
    }

    printf("%d\n", a);

    int x;
    scanf("%d\n", &x);

    switch (x)
    {
        case 1:
            printf("%d\n", b);
            int i;
            while (i)
            {
                b = 3;
                c = 2;
                d = 3;
                printf("asdfa\n");
                i++;
                if (i >= 10)
                {
                    break;
                }
            }
            d = 1;
            break;
        case 3:
        case 4:
            c = 1;
            printf("hi\n");
        default:
            c = 0;
            d = 31;
            printf("%d\n", x);
    }

    // C is uninitialized as the while loop in case 1 may never have run.
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
