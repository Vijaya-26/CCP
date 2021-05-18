//factorial of a number
#include<stdio.h>
int main()
{
	int n,fac=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>=1)
	{
		fac=fac*n;
		n--;
	}
	printf("factorial of %d is:%d",n,fac);
}
