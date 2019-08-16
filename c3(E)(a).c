#include <stdio.h>
int main()
{
	int i=1,j;
	while(i<=300)
	{
		if(i==2)
		printf("2");
		
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			break;
			else if(i==j+1)
			printf("\n%d",i);
			}
		i++;
		}
	}
