int g1;
int g2 = 7;
int g3 = 5;
int g4;

void leaf(int i, int j)
{
    int k = 5;
    int* p = &k;
    printf("%d %d %d", *p, j, i);
    if(i)
        leaf(i, j);
    printf("%d %d %d %d", g1, g2, g3, g4); // g1, g4 uninitialized from global
}

void leaf_ptr(int* i)
{
    int q;
    int p = 1;
    if(q) // q uninitialized
        leaf_ptr(&p);
    printf("%d", *i); // j uninitialized (i points to j in main)
}

void foo(int* i, int j)
{
    int k;
    leaf_ptr(i);
    switch(j)
    {
        case 1:
            if(j > 0)
            {
                while(1)
                {
                    if(k == j) // k uninitialized
                        break;
                    k = k + 1;
                }
            }
        case 2:
            break;
        case 4:
            k = k + 1;
        default:
            j = j + 7;
    }
    leaf(k, j);
}

int main()
{
  int i, j;
  foo(&j, i); // i uninitialized
  return 0;
}