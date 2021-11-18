#include<stdio.h>
#include<conio.h>
main()
{
	float farh;
	printf("Temperature conversion table\n");
	printf("Farhenheit \t celsius\n");
	for(farh=0;farh<=300;farh++)
	{
		printf("%3.0f \t %6.1f \n", farh, 5.0*(farh-32.0)/9.0);
	}
}
