
#include<stdio.h>
main()
{
	int n,i;
	printf("\nEnter a number for Table:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d *%d =%d",n,i,n*i);
	}
}