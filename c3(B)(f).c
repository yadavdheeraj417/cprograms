#include<stdio.h>
main()
{
int matchstic=21,user,computer;
while(matchstic>=1)
{if (matchstic==1)
{printf("you lost");
break;}
printf("\nuser pick 1,2,3,4:%d=");
scanf("%d",&user);
if(user>4)
{
	printf("invalid");
printf("\ntry agin pick 1,2,3,4;%d=");
scanf("%d",&user);}
computer=5-user;
printf("\ncomputer pick");
matchstic=matchstic-user-computer;}
}
