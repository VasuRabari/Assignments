#include<stdio.h>>
main()
{
	int n;
	printf("enter any num between 1 to 7=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\nSunday");
			break;
		case 2:
			printf("\nMonday");
			break;
		case 3:
			printf("\nTuesday");
			break;
		case 4:
			printf("\nWednesday");
			break;
		case 5:
			printf("\nThursday");
			break;
		case 6:
			printf("\nFriday");
			break;
		case 7:
			printf("\nSaturday");
			break;
		default:
			printf("INVALID OUTPUT");
		
	}
}