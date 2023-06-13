/* Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/
#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int rollno;
    char name[30];
    int Physics;
    int Maths;
    int Chemistry;
};
void main()
{
    struct student *s1;
    s1 = (struct student*)malloc(sizeof(struct student));
    printf("Enter the rollno : ");
    scanf("%d",&s1->rollno);
    printf("Enter the student name : ");
    scanf(" %[^\n]",s1->name);
    printf("Enter the physics marks : ");
    scanf("%d",&s1->Physics);
    printf("Enter the Maths marks : ");
    scanf("%d",&s1->Maths);
    printf("Enter the Chemistry marks : ");
    scanf("%d",&s1->Chemistry);
    int total_marks = (s1->Physics + s1->Maths+ s1->Chemistry);
    float percentage = ((float)total_marks/300.0)*100.0;

    printf("Student name is %s\nroll no is %d\nphysics marks = %d\nMaths marks = %d\nChemistry marks = %d\ntotal marks = %d\npercentage = %f",
            s1->name,s1->rollno,s1->Physics,s1->Maths,s1->Chemistry,total_marks,percentage);


}