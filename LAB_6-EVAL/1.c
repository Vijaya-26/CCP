#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int s=0;
    for(int i=0;i<(2*n);i++)
	{
        if(i%2!=0)
        s+=(i*i);
    }
    printf("\nSum of square of first %d odd numbers = %d\n",n,s);
}
