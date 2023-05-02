#include<stdio.h>
#define REWARD 10
int main(){

	double start,end,reward;
	printf("enter the start time");
	scanf("%lf",&start);
	printf("enter the end time");
	scanf("%lf",&end);
	reward=(end-start)*REWARD;
	printf("the reward value is %lf",reward);
	return 0;
	}	

