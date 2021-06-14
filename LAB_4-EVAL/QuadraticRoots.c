#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,x1,x2;
	printf("enter values of coefficients a, b and c :\n");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b - 4*a*c);
	if (D<0){
		printf("The roots are imaginary\n First root is : %f + i%f", -b/(2*a), sqrt(-D)/(2*a) );
		printf("Second root is : %f - i%f", -b/(2*a), sqrt(-D)/(2*a) );
	}
	else if(D>0){
	    x1=(-b + sqrt(D))/(2*a);
	    x2=(-b - sqrt(D))/(2*a);
	    printf("The roots are real and distinct\n First root is : %f\n",x1);
		printf("Second root is :%f\n",x2);
    }
    else{
    x1=-b/(2*a);
    printf("The roots are real and equal\n First root is :%f\n The second root is :%f",x1,x1);
    }
    return 0;
}
