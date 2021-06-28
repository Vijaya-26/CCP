#include <stdio.h>
int main(){
int r,c,i,j;
printf("Enter number of rows : ");
scanf("%d",&r);
printf("Enter number of columns : ");
scanf("%d",&c);
int arr1[r][c],arr2[r][c],arr3[r][c];
printf("Enter matrix 1 : \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        //printf("Enter element [%d][%d] - ",i+1,j+1);    
        scanf("%d",&arr1[i][j]);
    }
}
printf("Enter matrix 2 : \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        //printf("Enter element [%d][%d] - ",i+1,j+1);
        scanf("%d",&arr2[i][j]);
    }
}
printf("Addition of matrices : \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t",arr3[i][j]);
    }
    printf("\n");
}
}
