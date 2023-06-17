#include<stdio.h>
int evenOddDifference(int a[],int n)
{
	int even_sum = 0;
	int odd_sum = 0;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			even_sum+=a[i];
		}
		else
		{
			odd_sum+=a[i];
		}
	}
	if(even_sum > odd_sum)
	{
		return even_sum - odd_sum;
	}
	else
	{
		return odd_sum - even_sum;
	}
}
int main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int result = evenOddDifference(a,n);
	printf("%d",result);
}
