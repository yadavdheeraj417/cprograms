#include<stdio.h>
 int main(){
	 int age;
	 char ms, sex;
	 printf("Enter age, sex, marital status");
	 scanf("%d %c %c", &age, &sex, &ms);
	 if(ms=='m')
	 {
		 printf("Driver is insured.");
		 }
		 else {
			 if(sex == 'm'){
				 if(age>30)
				 {
					 printf("Driver is insured.");
					 }
					 else
					 {
						 printf("Driver is not insured.");
						 }
				 }
				 else{
					 if(age>25)
					 printf("Driver is insured.");
					 else
					 printf("Driver is not insured.");
					 }
			 }
			 return 0;
	 }
