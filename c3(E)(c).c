#include <stdio.h>
int main()
{
	int i, fact=1;
	float sum=0;
	for(i=1; i<=7; i++)
	{
		fact = fact * i;
		sum = sum + (i*1.00/fact);
		}
		printf("%f", sum);
	}
