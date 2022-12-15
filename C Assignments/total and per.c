#include<stdio.h>n
void main()
{
	int a,b,c,d,e,total,per;
	printf("enter first mark=");
	scanf("%d",&a);
	printf("enter second mark=");
	scanf("%d",&b);
	printf("enter third mark=");
	scanf("%d",&c);
	printf("enter fourth mark=");
	scanf("%d",&d);
	printf("enter fifth mark=");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("total marks=%d",total);
	per=total/5;
	printf("\nper=%d",per);
	
	if(per>75)
	{
		printf("\ndisctintion");
	}
	else if(per>60)
	{
		printf("\nfirst class");
	}
	else if(per>50)
	{
		printf("\nsecond class");
	}
	else if(per>35)
	{
		printf("\npass class");
	}
	else
	{
		printf("\nFAIL!!");
	}
}