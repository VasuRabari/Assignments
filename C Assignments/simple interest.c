#include<stdio.h>
void main()
{
float amt,rate,time,ans;
printf("Enter the amount=");
scanf("%f",&amt);
printf("Enter the rate=");
scanf("%f",&rate);
printf("Enter the time=");
scanf("%f",&time);
	ans=(amt*rate*time)/100;
	printf("simple interest=%f",ans);
}