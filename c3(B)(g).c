#include <stdio.h>
int main(){
	int num, positive=0, negative=0, zero=0;
	char x = 'y';
	do
	{
		printf("\nEnter the number: ");
		scanf("\n%d", &num);
		
		if(num>0)
		{
			positive++;
			}
		else if(num<0)
		{
			negative++;
			}
		else
		{
			zero++;
			}
		printf("\nDo you want to continue:(y/n): ");
		scanf("\n%c", &x);
		}while(x=='y' || x=='Y');
		
	printf("\nPositive: %d\n Negative: %d\n Zeroes: %d", positive, negative, zero);
	return 0;
	}
