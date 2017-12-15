int g1;
int g2 = 7;
int g3 = 5;
int g4 = 9;

void leaf(int i, int j)
{
    int q;
    int* k = &q;
    q = 1; // *k and q are both now defined
    printf("%d %d %d", j, i, *k);
    if(i)
        leaf(i, j);
    printf("%d %d %d %d", g1, g2, g3, g4); // g1 not defined in global
}

void leaf_ptr(int* i)
{
    int j = 10;
    if(*i) // p uninitialized (i points to p in foo)
        leaf_ptr(&j);
    printf("%d", *i);
}

void foo(int* i, int j)
{
    int k, p, q;
    leaf_ptr(&p);
    int* q_ptr = &q;
    switch(j)
    {
        case 1:
            if(j > 0)
            {
                while(1)
                {
                    if(k == j) // k uninitialized
                        break;
                    k = *i + 1; // i uninitialized (points to i in main)
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
  int i, j = 6;
  foo(&i, j);
  return 0;
}