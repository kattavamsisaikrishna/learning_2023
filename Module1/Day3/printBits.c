#include<stdio.h>
void printBits(int n)
{
	int size = 32;
	for(int i = size-1 ; i>=0 ; i--)
	{
		int bit = (n >> i) & 1;
		printf("%d",bit);
	}
}
int main()
{
	int n;
	printf("Enter a 32 bit integer : ");
	scanf("%d",&n);
	printBits(n);
}
