//accepting 10 numbers from user, count numbers of positive negetive and zeros using while
#include<stdio.h>
int main()
{
	int P=0,N=0,Z=0,n,x=1;
	while(x<=10)
    {
    	x++;
    	printf("enter a number:");
    	scanf("%d",&n);
    	if(n>0)
    	 P++;
    	else if(n<0)
		 N++;
		else
		 Z++;  
	}
	printf("number of positives:%d",P);
	printf("number of negetives:%d",N);
	printf("number of zeros:%d",Z);
}

