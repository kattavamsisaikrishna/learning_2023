#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
typedef struct student student;
void initialize(char *input,student *s)
{
	char  *token = strtok(input," ");
	if(token != NULL)
	{
		s->rollno = atoi(token);
	}
	
	token = strtok(NULL," ");
	if(token !=NULL)
	{
		strcpy(s->name,token);
	}
	
	token = strtok(NULL," ");
	if(token !=NULL)
	{
		s->marks = atof(token);
	}
}
void display(student *s,int size)
{
	printf("-----------DISPLAYING----------\n");
	for(int i=0;i<size; i++)
	{
		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
	printf("\n");
}
int compare(const void *a,const void *b)
{
	student *s1 = (student*)a;
	student *s2 = (student*)b;
	
	if(s1->marks > s2->marks)
	{
		return -1;
	}
	else if(s1->marks < s2->marks)
	{
		return 1;
	}
	else
		return 0;
	
}
void search(student *s,char *str,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		int temp  = (strcmp(s[i].name,str));
		if(temp == 0)
		{
			printf("%s is presentt at index %d\n",str,i);break;
		}
	}
	if(i == size)
	{
		printf("%s is not present\n\n",str);
	}
}
int main()
{
	int n;
	printf("Enter the size : ");
	scanf("%d",&n);
	
	student *s = (student*)calloc(n,sizeof(student));
	
	for(int i=0;i<n;i++)
	{
		char str[30];
		printf("Enter the string : "); 
		scanf(" %[^\n]",str);
		
		initialize(str,&s[i]);
	}
	
	display(s,n);
	
	char str[20];
	printf("Enter the student name you want to search : ");
	scanf("%s",str);
	
	search(s,str,n);
	
	printf("Sorting the array of structures based on marks in descending order\n");
	
	qsort(s,n,sizeof(student),compare);
	
	display(s,n);
}
