#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area; s=0;area=0; int A,B,C;
	printf("Enter 3 numbers to check if they can constitute 3 sides of a triangle:");
	scanf("%d %d %d",&a, &b, &c);
	
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
	{   
	    s=(a+b+c)/2; area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("The numbers you have entered are indeed three sides of a triange. \n");
		if((a==b)&&(b==c))
		{
			printf("The triangle is an equilateral triangle and it's area is %d \n", area);
		}
		else
		{
			if((a==b)||(b==c)||(c==a))
			{
				printf("The triangle is an isoceles triangle and it's area is %d \n", area);
			}
			else
			{
				printf("The triangle is a scalene triangle and it's area is %d \n", area);
			}
		}
		
		if(((a*a)+(b*b))==(c*c)||((b*b)+(c*c))==(a*a)||((c*c)+(a*a))==(b*b))
		{
			printf("The triangle is a right angled triangle.");
		}
		else
		{
			printf("The triangle is not right angled.");
		}
	}
	else
	{
		printf("The numbers you have entered cannot be the sides of a triangle.");
	}
	return 0;
}
