#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;int i;int a=0;
    scanf("%d", &n);
    if(n>=10000 && n<100000)
    {
        for(i=1;i<6;i++)
        {
            a=a+n%10;
            n=n/10;
        }
        printf("%d",a);
    }
    else{
        printf("please enter a number within 10000 and 100000");
    }
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
