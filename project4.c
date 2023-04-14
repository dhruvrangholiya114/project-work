#include<stdio.h>

main()

{
	float ba,hra,da,ta,totalsalary;
	
	printf("enter your Base Salary : ");
	scanf("%f",&ba);
	
	printf("enter your HRA : ");
	scanf("%f",&hra);
	
	printf("enter your DA : ");
	scanf("%f",&da);
	
	printf("enter your TA : ");
	scanf("%f",&ta);
	
hra =(hra*ba)/100;
da =(da*ba)/100;
ta =(ta*ba)/100;

totalsalary= ba+hra+da+ta;

printf("Total Salary is %.1f",totalsalary);	
}
