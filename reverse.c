#include <stdio.h>

int main (void)
{
	int a;
	int b;
	printf("Dwse duo arnitikous akeraious arithmous\n");
	scanf("%d %d", &a, &b);
	if(a>0 || b>0)
	{
		printf("Sfalma");
		return 0;
	}
	printf("%d %d", -a, -b);
	return 0;
}

