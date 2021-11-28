#include <stdio.h>
int main()
{int k;int a[10];int n;int i;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=9;i>=0;i--)
	{
		a[i]=n%10;
		n=n/10;
	}
	for( i=0;i<10;i++)
	{
		if(a[i]>=1 && a[i]<=9)
        {
            if(a[i]==1)
            {
                printf("one ");
            }
            else {
            if(a[i]==2)
            {
                printf("two ");
            }
            else{
            if(a[i]==3)
            {
                printf("three ");
            }
            else
            {
                if(a[i]==4)
                {
                    printf("four ");
                }
                else {
                if(a[i]==5)
                {
                    printf("five ");
                }
                else
                {
                    if(a[i]==6)
                    {
                        printf("six ");
                    }
                    else {
                    if(a[i]==7)
                    {
                        printf("seven ");
                    }
                    else{
                        if(a[i]==8)
                        {
                            printf("eight ");
                        }
                        else {
                        if(a[i]==9)
                        {
                            printf("nine ");
                        }                        
					}
                    }
                    }
                }
                }
            }
            
            }
            }
        }
	}
	return 0;
}
