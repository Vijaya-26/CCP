#include<stdio.h>
int ops(int* , int *, int *, int *, int*, float *, int *);
int main()
{
     int a,b;
     int add,sub,mul,rem;
     float quo;
     printf("Enter num 1 : ");
     scanf("%d",&a);
     printf("Enter num 2 : ");
     scanf("%d",&b);
     ops(&a, &b, &add, &sub, &mul, &quo, &rem);
     printf("\n");
     printf("Sum        :%d\n",add);
     printf("Difference :%d\n",sub);
     printf("Quotient   :%0.2f\n",quo);
     printf("Product    :%d\n",mul);
     printf("Remainder  :%d\n",rem);
}
int ops(int *a, int *b, int *add, int *sub, int *mul, float *quo, int *rem)
{
     *add=*a+*b;
     *sub=*a-*b;
     *mul= (*a)*(*b);
     *quo=(float)(*a)/(*b);
     *rem=(*a)%(*b);
}
