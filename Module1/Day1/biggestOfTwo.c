#include<stdio.h>
int biggestOfTwoUsingTernary(int,int);
int biggestOfTwoUsingIfElse(int,int);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Biggest of %d and %d is %d\n",a,b,biggestOfTwoUsingTernary(a,b));
	printf("Biggest of %d and %d is %d\n",a,b,biggestOfTwoUsingIfElse(a,b));
}
int biggestOfTwoUsingTernary(int a,int b)
{
	return a>b?a:b;
}
int biggestOfTwoUsingIfElse(int a,int b)
{
	if(a>b)
	{
		return a;
	}	
	else
	{
		return b;
	}
}
