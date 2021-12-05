#include <stdio.h>
#include <math.h>
float main()
{int a;int n;int rem=0; int b; int c;
	printf("Enter 1 to convert Decimal to Binary\nEnter 2 to convert Binary to Decimal\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			b=0;c=0;
			printf("Enter the decimal number:");
			scanf("%d",&n);
			while(n>0)
			{
				rem=n%2;
				b=b+(rem*pow(10,c));
				c++;
				n=n/2;
			}
			printf("Binary form: %d",b);
		    
			break;
			
		case 2:
			printf("Enter the binary number:");
			scanf("%d",&n);
			for(c=0;c<100;c++)
			{
				if((n%10)!=0)
				{
					b=b+pow(2,c);
				}
				n=n/10;
			}
			printf("Decimal form: %d",b);	
	}
}
