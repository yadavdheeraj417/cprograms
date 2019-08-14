#include<stdio.h>

int main(){
	int cy, yj, ys;
	printf("Enter the current year and year of joining the service: ");
	scanf("%d %d",&cy, &yj);
	ys = cy - yj;
	if(ys > 3){
		printf("You are eligible for bonus.");
		}
	}
