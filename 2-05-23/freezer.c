#include <stdio.h>
int main()
{ 
	int t;
	double T;
	printf("enter the time");
	scanf("%d",&t);

	T=((4*t*t)/(t+2))-20;
	printf("the value for temperature is %f",T);
	return 0;
}	
