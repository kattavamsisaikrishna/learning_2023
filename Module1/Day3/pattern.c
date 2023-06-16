#include<stdio.h>
void firstPart(int j,int i)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
}
void secondPart(int j, int spaces)
{
	for(j=1;j<=spaces;j++)
	{
		printf(" ");
	}
}
void thirdPart(int j,int i)
{
	for(j=i;j>=1;j--)
	{
		printf("%d",j);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,spaces = 0;
	for(i=n;i>=1;i--)
	{
		
		firstPart(j,i);
		secondPart(j,spaces);  
		spaces+=2;
		thirdPart(j,i);
		printf("\n");
	}
}
