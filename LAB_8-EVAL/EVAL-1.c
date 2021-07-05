#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i=0,length;
    printf("Enter a string : ");
    gets(str1);
    for(int i=0;i<100;i++)
    {
        str2[i]=str1[i];
    }
    while(str2[i]!='\0')
    {
        i++;
    }
    length = i;
    printf("The second string : ");
    puts(str2);
    printf("\nLength of the string is = %d",length);
}
