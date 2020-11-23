#include <stdio.h>

int main (void)
{
	double a;
	double b;
	char c;
	printf("Dwse enan xaraktira 'S' h 'M:\n");
	scanf("%c", &c);
	printf("Dwse duo dekadikous arithmous\n");
	scanf("%lf %lf", &a, &b);
	if(c == 'S')
	{
		printf("To athroisma tous einai: %lf", a+b);
	}
	if(c == 'M')
	{
		printf("To ginomeno tous einai: %lf", a*b);
	}
	return 0;
}
