#include <stdio.h>

struct student
{
    char name[30];
    int roll_number;
    char section[3];
    char department[100];
    int fees;
    int marks;

} student1, student2;

int main()
{
    printf("Student1\n");

    printf("Name:\t");
    scanf("%s", &student1.name);

    printf("Roll_no.:\t");
    scanf("%d", &student1.roll_number);

    printf("Section:\t");
    scanf("%s", &student1.section);

    printf("Department:\t");
    scanf("%s", &student1.department);

    printf("Fees:\t");
    scanf("%d", &student1.fees);

    printf("Marks:\t");
    scanf("%d", &student1.marks);

    printf("Student2\n");

    printf("Name:\t");
    scanf("%s", &student2.name);

    printf("Roll_no.:\t");
    scanf("%d", &student2.roll_number);

    printf("Section:\t");
    scanf("%s", &student2.section);

    printf("Department:\t");
    scanf("%s", &student2.department);

    printf("Fees:\t");
    scanf("%d", &student2.fees);

    printf("Marks:\t");
    scanf("%d", &student2.marks);

    if (student1.marks > student2.marks)
    
    {
        printf("%s\n", student1.name);
        printf("%d\n", student1.roll_number);
        printf("%s\n", student1.section);
        printf("%s\n", student1.department);
        printf("%d\n", student1.fees);
        printf("%s\n", student1.marks);
    }
    else if(student1.marks==student2.marks){
        printf("Both have same marks\n");
    }
    
    else
    {
        printf("%s\n", student2.name);
        printf("%d\n", student2.roll_number);
        printf("%s\n", student2.section);
        printf("%s\n", student2.department);
        printf("%d\n", student2.fees);
        printf("%s\n", student2.marks);
    }

    return (0);
}