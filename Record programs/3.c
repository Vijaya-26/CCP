#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char data[100];
    fp = fopen("BMSCE.txt","w");          
    if(fp==NULL){
        printf("\nFile could not be opened");
        exit(1);
    }
    printf("Enter data : ");            
    gets(data);
    fprintf(fp,"%s",data);

    fscanf(fp,"%s",data);
    printf("Data from file : \n");
    printf("%s\n",data);
    fclose(fp);
}
