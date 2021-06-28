#include <stdio.h>
int main()
{
int i,j,max, arr1[4][3];
printf("Enter marks : \n");
for(i=0;i<4;i++)
{
    for(j=0;j<3;j++)
	{
        printf("Marks of student[%d] in sub[%d] : ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<3;i++)
{
        max = arr1[i][0];
        for(int j=0;j<4;j++)
		{
            if (arr1[j][i]>max)
            max=arr1[j][i];            
		}
        printf("maximum marks in sub[%d] = %d\n",i+1,max);
    }
}