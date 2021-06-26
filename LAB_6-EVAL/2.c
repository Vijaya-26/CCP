#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
	{
        printf("Enter ele %d : ",i+1);
        scanf("%d",&arr1[i]);
    }
    int large = arr1[0],largepos;
    int small = arr1[0],smallpos;
    for(int i=0;i<n;i++){
        if(arr1[i]>large){
        large = arr1[i];
        largepos = i;
        }
        if(arr1[i]<small){
            small = arr1[i];
            smallpos = i;
        }
    }
    int temp;
    temp = arr1[largepos];
    arr1[largepos]=arr1[smallpos];
    arr1[smallpos]=temp;
    for(int i=0;i<n;i++){
        printf("\n%d",arr1[i]);
    }
    printf("\n");
}
