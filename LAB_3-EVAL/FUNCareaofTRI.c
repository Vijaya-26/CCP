#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area;
	printf("enter the sides of triangle :");
	scanf("%d %d %d",&a,&b,&c);
	A(a,b,c);
	return 0;
}
int A(int a,int b,int c)
{
	int s,area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is : %d",area);
	return 0;
}

