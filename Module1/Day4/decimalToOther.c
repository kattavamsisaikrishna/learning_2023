#include<stdio.h>
void decimalToBinary(int n)
{
	int r;
	int a[32];
	int i=0;
	while(n!=0)
	{
		r = n%2;
		a[i++] = r;
		n/=2;
	}
	printf("Binary = ");
	for(int j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
void decimalToOctal(int n)
{
	int r;
	int a[32];
	int i=0;
	while(n!=0)
	{
		r = n%8;
		a[i++] = r;
		n/=8;
	}
	printf("Octal = ");
	for(int j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
void decimalToHex(int n)
{
	int r;
	int a[1000];
	int i=0;
	while(n!=0)
	{
		r = n%16;
		a[i++] = r;
		n/=16;
	}
	printf("Hex = ");
	for(int j=i-1;j>=0;j--)
	{
		if(a[j] == 10)
			printf("A");
		else if(a[j] == 11)
			printf("B");
		else if(a[j] == 12)
			printf("C");
		else if(a[j] == 13)
			printf("D");
		else if(a[j] == 14)
			printf("E");
		else if(a[j] == 15)
			printf("F");
		else
			printf("%d",a[j]);
	}
}
int main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	decimalToBinary(n);printf("\n");
	decimalToOctal(n);printf("\n");
	decimalToHex( n);
}
