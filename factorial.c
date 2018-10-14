#include<stdio.h>
#include<stdlib.h>
/*The program is to calculate a factorial of a number by using recursion*/
int fact(int);//Funtion declaration
int main()
{
	int no,ans;
	printf("Enter a number:");
	scanf("%d",&no);
	ans=fact(no);//Function calling
	printf("Factorial is %d",ans);
}
int fact(int x)//Function defining
{
	int f;
	if(x==0)
		return 1;
	else
		f=x*fact(x-1);//Recursion
	return f;
}
