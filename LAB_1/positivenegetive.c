//given number is positive negetive or zero
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if (n>0)
	   printf("number is positive",n);
	else if (n<0)
	   printf("number is negetive",n);
	else
	   printf("number is 0",n);         
}
