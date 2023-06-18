#include<stdio.h>
void stringLeftRotation(char s[],int k)
{
	int i,j;
	int length  = 0;
	for(length = 0; s[length]!='\0';length++){}
	for( j=0;j<k;j++)
	{
		char first = s[0];
		for(i=1;s[i]!='\0';i++)
		{
			s[i-1] = s[i];
		}
		s[length-1] = first;
	}
	
	printf("\n%s",s);
}
void stringRightRotation(char s[],int k)
{
	int i,j;
	int length  = 0;
	for(length = 0; s[length]!='\0';length++){}
	for( j=0;j<k;j++)
	{
		char last = s[length-1];
		for(i=length-2;i>=0;i--)
		{
			s[i+1] = s[i];
		}
		s[0] = last;
	}
	printf("\n%s",s);
}
int main()
{
	printf("1.string left Rotation\n");
	printf("2.string right Rotation\n");
	int option;
	scanf("%d",&option);
	char s[100];
	printf("Enter String : \n");
	scanf("%s",s);
	printf("Enter k value : ");
	int k;
	scanf("%d",&k);
	switch(option)
	{
		case 1:stringLeftRotation(s, k);break;
		case 2:stringRightRotation(s, k);break;
		default:printf("Enter 1 or 2");break;
	}
	
}
