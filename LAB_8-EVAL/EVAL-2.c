#include<stdio.h>
struct student{
    int roll_number;
    char name[20];
    char section[10];
    char dept[10];
    float fees;
    float results;
};
int main()
{
    int i;
    struct student S1,S2;
    printf("enter roll number of 1st student : ");
    scanf("%d",&S1.roll_number);
    printf("enter name of 1st student : ");
    scanf("%s",S1.name);
    printf("enter section of 1st student : ");
    scanf("%s",S1.section);
    printf("enter the department of 1st student : ");
    scanf("%s",S1.dept);
    printf("enter fees of 1st student : ");
    scanf("%f",&S1.fees);
    printf("enter results of 1st student : ");
    scanf("%f",&S1.results);
    printf("enter roll number of 2nd student : ");
    scanf("%d",&S2.roll_number);
    printf("enter name of 2nd student : ");
    scanf("%s",S2.name);
    printf("enter section of 2nd student : ");
    scanf("%s",S2.section);
    printf("enter the department of 2nd student : ");
    scanf("%s",S2.dept);
    printf("enter fees of 2nd student : ");
    scanf("%f",&S2.fees);
    printf("enter results of 2nd student : ");
    scanf("%f",&S2.results);
    if(S1.results>S2.results)
    {
        printf("student 1 has secured highest marks");
        printf("Roll number : %d\n",S1.roll_number);
        printf("Name :%s\n",S1.name);
        printf("Section : %s\n",S1.section);
        printf("Department : %s\n",S1.dept);
        printf("Fees : %f\n",S1.fees);
        printf("Results : %f\n",S1.results);
    }
    else if(S1.results==S2.results)
    {
        printf("Student 1 and Student 2 have the same marks");
    }
    else
    {
        printf("student 2 has secured the highest marks\n");
        printf("Roll number: %d\n",S2.roll_number);
        printf("Name: %s\n",S2.name);
        printf("Section: %s\n",S2.section);
        printf("Department: %s\n",S2.dept);
        printf("Fees: %f\n",S2.fees);
        printf("Results: %f\n",S2.results);
    }
    return 0;
}









