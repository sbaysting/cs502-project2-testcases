// CFG Construction Test - Conditionals with return expressions
main()
{
	int case1, case2, case3, case4, case5, case6;
	int cond1, cond2, cond3, cond4, cond5, cond6 = 1;

	if (cond1)
		return case1;

	if (cond2)
		return case2;
	else
		case3 = !cond2;

	if (cond3)
	{
		if (cond4)
			case4 = cond4;
		else
			return !cond4;
	}
	else
	{
		if (cond5)
		{
			return case6;
		}
		else
		{
			int case7 = cond6;
		}
	}
	return 0;
}
