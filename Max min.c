#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers of your choice to find out the maximum and minimum:");
	scanf("%d %d %d", &a, &b, &c);
	if((a>b)&& (a>c))
	{
		printf("Maximum is %d \n", a);
		if(b>c)
		{
			printf("Minimum is %d", c);
		}
		else
		{
			printf("Minimum is %d", b);
		}
	}
	else
	{
		if((b>a) && (c>a))
		{   
			printf("Minimum is %d \n", a);
			if(b>c)
			{
				printf("Maximum is %d", b);
			}
			else
			{
				printf("Maximum is %d", c);
			}
		}
		else
		{
			if(b>c)
			{
				printf("Maximum is %d \n", b);
				printf("Minimum is %d", c);
			}
			else
			{
				printf("Maximum is %d \n", c);
				printf("Minimum is %d", b);
			}
		}
	}
	return 0;
}
