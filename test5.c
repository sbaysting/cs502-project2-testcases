main()
{
        float   x, y;

        printf("Please input 1st value: ");
        scanf("%f", &x);

	{
           y = 4.0;
           x = x - y;
	}

        printf("Values AFTER %f, %f\n", x, y);
        return 0;
}
