#include <stdio.h>
int main(){
	int matchsticks = 21, user, computer;
	while(matchsticks > 1)
	{
		printf("\nEnter no. of matchsticks: ");
		scanf("%d", &user);
		while((user>4) || (user<1))
		{
			printf("You entered wrong choice.");
			printf("Enter numbers between 1-4 only: ");
			scanf("%d", &user);
			}
		computer = 5-user;
		printf("I picked: %d",computer);
		matchsticks = matchsticks - (user+computer);
		if(matchsticks == 1)
		{
			printf("\nMatchstick remaining: %d.\nI won, You loose!", matchsticks);
			break;
			}
		}
	}
