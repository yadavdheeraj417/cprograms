#include<stdio.h>
int main(){
	int m1, m2, m3, m4, m5;
	printf("Enter the marks of the five subjects: ");
	scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
	int per = (m1 + m2 + m3 + m4 + m5)/5;
	if(per>=60)
	printf("First Division");
	else if(per>=50)
	printf("Second Division");
	else if(per>=40)
	printf("Third Division");
	else 
	printf("Fail");
	}
