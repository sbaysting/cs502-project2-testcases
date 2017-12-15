int g1;
int g2 = 7;
int g3;
int g4 = 9;

void leaf(int i, int j)
{
    int q;
    int* k = &q;
    printf("%d %d %d", j, i, *k); // q uninitialized (k points to q)
    if(i)
        leaf(i, j);
    printf("%d %d %d %d", g1, g2, g3, g4); // g1, g3 uninitialized in global
}

void leaf_ptr(int* i)
{
    int u = 2;
    if(*i) // p uninitialized (i points to p in foo)
        leaf_ptr(&u);
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
            k = k + *q_ptr; // q uninitialized (q_ptr points to q)
        default:
            j = j + 7;
    }
    leaf(k, j);
}

int main()
{
  int i, j;
  foo(&i, j); // j uninitialized
  return 0;
}