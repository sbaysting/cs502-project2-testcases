int main()
{
    int d;
    int c;
    int b;
    scanf("%d\n", &b);

    switch(b)
    {
        case 1:
            {
                int i;
                switch (i)
                {
                    case 3:
                        c = 1;
                        break;
                    case 4:
                        printf("do nothing\n");
                    case 5:
                        printf("do less\n");
                        break;
                }
                break;
            }
        case 2:
            c = 2;
            break;
    }

    // uninitialized should be: c, i
    return c;
}
