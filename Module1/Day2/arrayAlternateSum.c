#include<stdio.h>
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
	int sum = 0;
	for(int i=0;i<n;i+=2)
	{
		sum+=a[i];
	}
	printf("%d",sum);
}
