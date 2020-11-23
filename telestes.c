#include <stdio.h>

int main (void)
{
	int a = 4, b = 3, c = 1;
	a += b -= ++c * a--;
	printf("%d %d %d\n", a, b, c);
	return 0;
	/*Arxika, afoy stin timi a-- o telestis meiwsis einai meta tin metavliti,
	xrisimopoieitai prwta i trexoysa timi tis kai epeita tha meiwthei kata 1. 
	Stin timi ++C o telestis auksisis einai prin tin metavliti, opote i timi tha auksithei kata 1. 
	Sti sinexeia exoyme b-=2*4, diladi b-=8, poy ayto isodinamei me b=b-8 poy b=3-8 kai ginetai b=-5. 
	Telos, to a+=b isodinamei me a=a+b, ara a=a+(-5), poy a=3-5 kai ginetai a=-2.*/
}
 
