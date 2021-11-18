#include<stdio.h>
float main()
{
	float a,b,t; t=0;
	printf("Enter quantity:");
	scanf("%f", &a);
	printf("Enter the cost of product:");
	scanf("%f", &b);
	if(a>1000)
	{t=(a*b)*10/100;
		
		printf("your total after discount: %4.2f",t);
    }
	if(a<=1000)
	{t=a*b;
		printf("your total: %4.2f",t);
	}
     return 0; 
}
