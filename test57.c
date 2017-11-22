
int testif(int i){
  
  int a1, a2, a3, a4;

  if (i ==1) {
    printf("now i = 1\n");
    a1 = 10;
    return i+a1;
  }else {
    printf("now i!=1\n");
    if (i == 2) {
      a1 = 10;
      printf ("now i = 2\n");
      return a1+a2+i+a4;
    }
	else a2 = 5;
  }
  a1 = 10;
  a2 = 8;
  a4 = 6;
  printf("%d %d %d %d\n", a1, a2, a3, a4);
  return;
}

int main()
{
  int i;
  printf("i=:");
  scanf("%d", &i);
  i = testif(i);
}
