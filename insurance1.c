#include<stdio.h>

int main() {
	int age; char sex, ms;
	printf("Enter age, sex and marital status: ");
	scanf("%d %c %c", &age, &sex, &ms);
	if((ms=='m')||(ms=='u' && age>30 && sex =='m') || (ms=='u' && age>25 && sex=='f'))
	printf("Driver is insured.");
	else
	printf("Driver is not insured.");
	}
