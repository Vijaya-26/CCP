#include<stdio.h>
#include<math.h>
int average(int a,int b,int c)
{
	int sum,avg;
	sum=(a+b+c);
	avg = sum/3;
	return (avg);
}
int main()
{
	int a,b,c,x;
	printf("enter 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	x = average(a,b,c);
	printf("Average of three numbers %d, %d and %d is : %d",a,b,c,x);
	return 0;
}
