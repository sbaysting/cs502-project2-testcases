// A couple of recursive functions.
// f1 uses the argument
// f2 initializes it
// in this test, we use it, then initialize it
int f1(int *p){
	
   int x;
   if (x < 1) 
   {
      x = *p;
      return 0;
   }
   else
   { 
      f1(p);
   } 
}

int f2(int *p) {

   int y;   
   if (y < 1) 
   {
      *p = y;
      return 0;
   }
   else
   { 
      f2(p);
   }
    return t;
}

int main() {

    int a;

    f1(&a);
    f2(&a);
    
    return a;
}

 

