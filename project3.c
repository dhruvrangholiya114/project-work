#include<stdio.h>

main()

{
	float F,C;
	printf("enter the value of temperature in celsius : ");
	scanf("%f",&C);
	
	F=(C*9/5)+32;
	
	printf("The value of temperature in Fahrenheit is %.1f ",F);
}
