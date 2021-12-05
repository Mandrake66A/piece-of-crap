#include <stdio.h>

int main()
{int n;int c;int count=0;int a=0;int p=0;
	printf("Enter the number:");
	scanf("%d",&n);c=n;
	while(n>0)
	{
		a=a+n%10;
		p=(p*10)+(n%10);
		n=n/10;
		count++;
	}
	printf("The number of digits is %d\nThe sum of digits is %d\n",count,a);
	if(p==c)
	{
		printf("The number is a palindrome");
	}
	else
	{
		printf("The number is not a palindrome");
	}
}
