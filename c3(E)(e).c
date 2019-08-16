#include <stdio.h>
int main()
{
	int y;
	float x,i;
	printf("i \t\t y \t x");
	for(y=1; y<=6; y++)
	{
		for(x=5.5; x<=12.5; x+=0.5)
		{
			i = 2 + (y*1.0 + 0.5 * x);
			printf("\n%f\t%d\t%f", i, y, x);
			}
		}
	}
