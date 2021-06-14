#include<stdio.h>
int main()
{
	int M,N,i;
	printf("enter values in between of which you need even numbers :");
	scanf("%d %d",&M,&N);
	   for(i=M; i<=N; i++)
	   {
	   	if(i%2==0)
	   	printf("%d\n",i);
       }
    return 0;
}
