//whether number is prime or not
#include<stdio.h>
int main()
{
	int i=2,n,count;
	printf("enter a number:");
	scanf("%d",&n);
	
	while(i<=n/2)
	{
		if(n%i==0)
		count=1;
		i++;
		break;
	}
	if(n==1)
	  printf("it is neither prime nor composite");
	else if(count==1)
	  printf("it is not a prime number");
	else
	  printf("it is a prime number");
}
