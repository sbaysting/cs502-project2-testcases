main()
{
        float   x, y;
	int z, i=0;
        printf("Please input 1st value: ");
        scanf("%f", &x);

	while (1)
	{
           if (x > 0.0) y = 4.0;
	   else break;
           x = x - y;
		while(i<5) {
			z = 10;
		}
	}

        printf("Values AFTER %f, %f, %d\n", x, y, z);
        return 0;
}
