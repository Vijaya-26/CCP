//check if number is even or odd
#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter a number:");
	scanf("%d",&n);
	rem=n%2;
	if(rem==0)
	  printf("number is even",n);
	else 
	  printf("number is odd",n); 
}
