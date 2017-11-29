
int getnumber(){
	int x;
  return x;
}

int main(){
  int i,j,k;
  int a;
  a = getnumber();
  switch(a){
  case 0: 
    i=a;
  case 1:
    i = a + 5;
	j = i + a;
    k = a;
    break;
  case 2:
    i = a;
    j = a;
	k = a;
    break;
  default:
    i = a;
	j = a;
	k = a;
    break;
  };

  printf("%d %d %d\n", i,j,k);
  return 1;
}
