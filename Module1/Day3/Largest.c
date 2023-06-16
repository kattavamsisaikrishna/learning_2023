/*
Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986 */
#include<stdio.h>
int indexOfMaxElement(int a[],int length,int max)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i] == max)
		{
			return i;
		}
	}
	return 0;
}
int max(int a[],int length)
{
	int m = a[0];
	for(int i=0;i<length;i++)
	{
		if(a[i]>m)
			m = a[i];
	}
	//making index of max element to 0
	int index = indexOfMaxElement(a,length,m);
	a[index] = 0;
	return m;
}

int main()
{
	int a[32];
	int n;
	printf("Enter a four digit number");
	scanf("%d",&n);
	int r;
	int array_length = 0;
	while(n!=0)
	{
		r = n%10;
		a[array_length++] = r;
		n/=10;
	}
	int finalNumber = 0;
	int firstDigit = max(a,array_length);
	int secondDigit = max(a,array_length);
	int thirdDigit  = max(a,array_length);
	finalNumber = firstDigit*10 + secondDigit;
	finalNumber = finalNumber*10 + thirdDigit;
	printf("%d",finalNumber);
	
}
