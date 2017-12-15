int g1 = 9;
int g2;
int g3;
int g4;

void leaf(int i, int j)
{
    int k;
    int* p = &k;
    printf("%d %d %d", *p, j, i); // k is not initialized (p points to k)
    if(i)
        leaf(i, j);
    printf("%d %d %d %d", g1, g2, g3, g4); // g2, g3, g4 are not initialized from global
}

void foo(int* i, int j)
{
    int q;
    int* p = &q;
    int k = j;
    switch(*i) // i is not initialized (passed from main)
    {
        case 1:
            if(j > 0)
            {
                while(1)
                {
                    if(k == j)
                        break;
                    k = k + 1;
                }
            }
        case 2:
            break;
        case 4:
            k = k + 1;
        default:
            *i = *i + *i;
    }
    leaf(k, j);
}

int main()
{
  int i, j = 1;
  foo(&i, j);
  return 0;
}