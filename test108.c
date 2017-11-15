// Test of empty statement lists since i've been burned
main()
{
	int x;
	int a;

	switch (x)
	{
	case 1:
	{
	}
	break;
	
	case 2:
	{
		{
			{
			}
		}
	}
	break;

	case 3:
	break;
	}

	if (x)

	if (x)
	{
	}

	if (x)
	{
	}
	else
	{
		if (x)
		{
		}
	}
}
