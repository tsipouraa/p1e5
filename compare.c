#include <stdio.h>

int nain (void)
{
	double a;
	double b;
	scanf("%lf %lf", &a, &b);
	if(a < b)
	{
		printf("O mikroteros dekadikos arithmos einai: %lf", a);
		return 0;
	}
	if(a > b)
	{
		printf("O mikroteros dekadikos arithmos einai: %lf", b);
		return 0;
	}
	return 0;
}

