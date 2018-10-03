#include<stdio.h>
int main()
{
    printf("The factorial of a number:-\n");
	int a,b,c=1;
	printf("Please insert the value of a : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=b*c;
		
		
	} printf("The factorial is:%d",c);
}
