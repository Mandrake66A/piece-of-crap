#include <stdio.h>
int main()
{
	int n;int i;int c=0; int count=0; 
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=100)
		{
			c=c+100;
			count=count+1;
		}
		else
		{printf("%d X 100\n",count);
			count=0;
			break;
		}	
	}
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=50)
		{
			c=c+50;
			count=count+1;
		}
		else
		{printf("%d X 50\n",count);
		count=0;
			break;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=10)
		{
			c=c+10;
			count=count+1;
		}
		else
		{printf("%d X 10\n",count);
		count=0;
			break;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=5)
		{
			c=c+5;
			count=count+1;
		}
		else
		{printf("%d X 5\n",count);
		count=0;
			break;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=2)
		{
			c=c+2;
			count=count+1;
		}
		else
		{printf("%d X 2\n",count);
		count=0;
			break;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(c<n && n-c>=1)
		{
			c=c+1;
			count=count+1;
		}
		else
		{printf("%d X 1\n",count);
		count=0;
			break;
		}
	}
	return 0;
}
