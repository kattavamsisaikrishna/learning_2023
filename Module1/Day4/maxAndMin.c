#include<stdio.h>
int max(int a[],int n)
{
	int m = a[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m = a[i];
		}
	}
	return m;
}
int min(int a[],int n)
{
	int m = a[0];
	int i;
	for(i=0;i<n;i++)
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
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int maximum = max(a,n);
	int minimum = min(a,n);
	
	printf("max element = %d\n",maximum);
	printf("min element = %d",minimum);
}
