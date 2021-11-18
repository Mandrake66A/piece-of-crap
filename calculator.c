#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	printf("Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for multiplication \n Enter 4 for Division \n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("Addition of the two numbers %d and %d is %d",a,b,a+b);
			break;
		case 2:
		    printf("Subtraction of the two numbers %d and %d is %d",a,b,a-b);
			break;
		case 3:
		    printf("Multiplication of the two numbers %d and %d is %d",a,b,a*b);
			break;
		case 4:
			printf("Dividion of the two numbers %d and %d is %d",a,b,a/b);
			break;
		default:
		    printf("Please enter a valid input");	
	}
}
