#include <stdio.h>

int main(){
	int num, range, a, b, smallest, largest;
	printf("Enter the first two numbers: ");
	scanf("\n%d\n%d", &a, &b);
	if(a>b)
	{
		smallest = b;
		largest = a;
		}
	else
	{
		smallest = a;
		largest = b;
		}
	char ans = 'y';
	while(ans == 'y' || ans =='Y')
	{
		printf("\nWant to enter another number(y/n): ");
		scanf("\n%c", &ans);
		if(ans=='y' || ans=='Y')
		{
			printf("\nEnter the other number:");
			scanf("\n%d", &num);
			if(num>largest)
			largest = num;
			else if(num<smallest)
			smallest = num;
			}
		}
	range = largest -smallest;
	printf("\nThe range of the list you entered is: %d", range);
	}
