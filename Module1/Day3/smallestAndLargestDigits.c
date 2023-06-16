#include<stdio.h>
int max(int a[],int size)
{
	int m = a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>m)
		{
			m = a[i];
		}
	}
	return m;
}
int min(int a[],int size)
{
	int m = a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]<m)
		{
			m = a[i];
		}
	}
	return m;
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		int a[32];
		int n;
		scanf("%d",&n);
		if(n<10)
		{
			printf("Not Valid\n");
			continue;
		}
		int r,array_length=0;
		while(n!=0)
		{
			r = n%10;
			a[array_length++] = r;
			n/=10;
		}
		printf("min digit = %d\n",min(a,array_length));
		printf("max digit = %d\n",max(a,array_length));
		
		
	}
}
