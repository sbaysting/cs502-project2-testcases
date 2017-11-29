main()
{
	int b;
   	{
     		b = 1;
     		int c = b;
    	}
    	{
     		int b;
     		int c = b; // uninitialized case
    	}
   	int c = b; // uninitialized case (incorrect - should be initialized)
}
