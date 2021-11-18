#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,gt; gt=0;
	printf("Enter the marks for subject 1:");
	scanf("%d",s1);
	printf("Enter the marks for subject 2:");
	scanf("%d",s2);
	printf("Enter the marks for subject 3:");
	scanf("%d",s3);
	printf("Enter the marks for subject 4:");
	scanf("%d",s4);
	printf("Enter the marks for subject 5:");
	scanf("%d",s5);
	gt=s1+s2+s3+s4+s5;
	if((100*gt/500)>=60)
	{
		printf("You have been awarded first division and your percentage is :%d",100*gt/500);
	}
	else
	{
		if(60>(100*gt/500)>=50)
		{
			printf("You have been awarded second division and your percentage is :%d",100*gt/500);
		}
		else
		{
			if(50>(100*gt/500)>=40)
			{
				printf("You have been awarded third division and your percentage is :%d",100*gt/500);
			}
			else
			{
				printf("you have failed and your percentage is: %d ",100*gt/500);
			}
		}
		
	}
	return 0;
}
