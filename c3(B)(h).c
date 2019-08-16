#include <stdio.h>

int main(){
	int decimalNumber, octalNumber=0, i=1;
	printf("Enter the decimal number: ");
	scanf("%d", &decimalNumber);
	while(decimalNumber !=0)
	{
		octalNumber += (decimalNumber%8) * i;
		decimalNumber /=8;
		i *= 10;
		}
	printf("The decimal equivalent of the given number is: %d", octalNumber);
	return 0;
	}
