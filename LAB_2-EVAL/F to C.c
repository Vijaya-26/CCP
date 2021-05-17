//fahrenheit to celcius
#include<stdio.h>
main()
{
	float F,C;
	printf("temperature in fahrenheit is:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("temperature in celcius is:%f",C);
	return 0;
}
