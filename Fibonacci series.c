#include <stdio.h>
int main()
{
	int n;int i; int a,b,c;
	printf("Enter how many Fibonacci numbers you want:");
	scanf("%d",&n);a=0;b=1;c=0;
	printf("%d ",a);
	for(i=1;i<n;i++)
	{c=a+b;
		printf("%d ",c);
		b=a;
		a=c;
	}

}
