#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[20];
	int age;
};
typedef struct student student;
int main()
{
	int n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	student *s = (student*)calloc(n,sizeof(student));
	for(int i=1;i<=n;i++)
	{
		printf("Enter %dth student rollno,name,age : ",i);
		scanf("%d",&s[i].rollno);
		scanf("%s",s[i].name);
		scanf("%d",&s[i].age);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d) %d %s %d\n",i,s[i].rollno,s[i].name,s[i].age);
	}
	
	free(s);
}
