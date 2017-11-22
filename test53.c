main()
{
        float   x, y;
		int a, b, c;

        printf("Please input 1st value: ");
        scanf("%f", &x);
		printf("Please input 2nd value: ");
		scanf("%d", &a);

	while (1)
	{
           if (x > 0.0) y = 4.0;
		   else break;
           x = x - y;
	}
	
	while (1)
	{
		c = a + 10;
		while (y > 0.0)
		{
			b = c * 2;
			a = a + b;
			x = x - 2.0;
			if (x < 0.0) break;
		}
		if (a < 1000) continue;
		if (c > 100) break;
		c = c + b;
	}

        printf("Values AFTER %f, %f\n", x, y);
        return 0;
}
