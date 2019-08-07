#include<stdio.h>
#include<math.h>
int main() {
	double x,y,result;
	printf("Enter the number and it's index: ");
	scanf("%f %f", &x, &y);
	result = pow(x,y);
	printf("The result of the expression is: %f",result);
	}
