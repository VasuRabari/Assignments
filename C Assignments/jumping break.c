#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==8)
		{
			break;
		}
		printf("\nI=%d",i);
	}
	printf("\nhello");
}