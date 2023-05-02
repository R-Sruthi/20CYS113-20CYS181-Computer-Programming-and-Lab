#include <stdio.h>
int main()
{
	double vol,time;
	double rate;
	printf("enter the volume");
	scanf("%lf",&vol);
	printf("enter the time in minutes");
	scanf("%lf",&time);

	rate= (vol)/(time/60);

	printf("the infusion rate will be %f",rate);
}
