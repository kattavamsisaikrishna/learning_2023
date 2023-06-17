#include<stdio.h>
int linearSearch(int a[],int n,int ele)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i] == ele)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	int ele;
	printf("Enter the element that you want to search : ");
	scanf("%d",&ele);
	
	int index = linearSearch(a,n,ele);
	if (index >= 0)
	printf("%d is present at index %d\n",ele,index);
	else
	printf("%d is not present in the array\n",ele);
}
