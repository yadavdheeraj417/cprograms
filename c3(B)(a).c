#include<stdio.h>
int main() {
	int employ;
	float hours, pay;
	for(employ=1; employ<=10; employ++)
	{
		printf("\nEnter the hours for which employee works: ");
		scanf("%f", &hours);
		if(hours<=40)
		printf("There is no overtime pay of employee.");
		else
		{
			hours = hours -40;
			pay = (3*hours*12)/4;
			printf("The overtime pay of employee is : %f", pay);
			}
			}
	}
