#include<stdio.h>
int main() {
	int x,result;
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x<0)
	{
		printf("The factorial is find out only of negative numbers.");
		}
	else if(x==0)
	printf("The factorial of 0 is 1.");
	else
	{
		result = x;
		while(x>1){
			result = result * (x-1);
			x--;
			}
			printf("The factorial of the number is: %d",result);
		}
		
	}
