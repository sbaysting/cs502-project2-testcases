// Test of no default case
main()
{
	int x;
	int a;

	switch (x)
	{
	case 1:
	{
	   a = 1;
	}
	break;
	
	case 2:
	{
		{
			{
			}
 			a = 2;
		}
	}
	break;

	case 3:
		a = 3;
	break;
	}

	int y = a;
}
