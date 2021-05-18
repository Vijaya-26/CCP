//check equality of two numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers a and b");
	scanf("%d %d",&a,&b);
	if (a==b)
	printf("numbers are equal");
    else if (a>b)
	printf("a is greater than b");
	else
	printf("b is greater than a");
}
