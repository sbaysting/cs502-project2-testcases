// CFG Construction Test - Nested Switch Case With Empty Default
main()
{
	int conda,condb;
	int casea1,casea2,caseb1,caseb2;
	switch (conda)
	{
		case 1:
		{
			casea1 = 1;
		}
		break;

		case 2:
		{
			casea2 = 1;
			switch (condb)
			{
				case 1:
				{
					caseb1 = 1;
				}
				break;

				case 2:
				{
					caseb2 = 1;
				}
				break;
			}
		}
		break;

		default:
	}
}
