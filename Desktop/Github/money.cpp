#include<stdio.h>
#include<stdlib.h>
// stdio and stdlib are compulsory libraries in a c file
// void returns nothing
void funds(int money){
	int high;
	int consolation=(money*50)/100;
	int management=(consolation*6.25)/100;
	int nonmanagement=(consolation*5)/100;
	printf("%d for consolation",consolation);
	printf("%d for management",management);
	printf("%d for nonmanagement",nonmanagement);	
}

void high(funds){
	int highest=funds[0];
	int lowest=funds[0];
	for(int i=0;i<5;i++){
		if(highest>funds[i])
		{highest=funds[i];
		}
		if(lowest<funds[i]){
			lowest=funds[i];
		}
	}
// 	printf displays code onto the screen
	printf("%d",lowest);
	printf("%d",highest);
}
// main is used 
int main(){
	int high;
	int place = 5;
	int dancer[place];,sum=0,choice;
	start;
	printf("Enter the money for five places");
	for(int i=0;i<places;i++){
		printf("Enter the money for a place %d",i++);
		scanf("%d",&dancer[i]);
		sum=sum+dancer[i];
		printf("....menu....\n");
		printf("1.Funds distribution\n");
		printf("2.Annual membership share");
		printf("3.Continue");
		printf("4.Quit");
		scanf("%d"&choice);
// 		switch provides different cases necessary
		switch(choice){
			case 1:
				funds(sum);
				break;
			case 2:
				int each=(sum/2)*9;
				printf("%d is money for consolation",each);
				break;
			case 3:
				go to start;
				break;
			case 4:
			default:	
		}
	}
	
	
return 0;	
}

