#include<stdio.h>

main()

{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	
	printf("enter the value of b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The swap value is a=%d and b=%d",a,b);
	
}
