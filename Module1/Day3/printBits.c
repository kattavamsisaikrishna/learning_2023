#include<stdio.h>
void printBits(int n)
{
	int size = 32;
	for(int i = size-1 ; i>=0 ; i--)
	{
		unsigned int mask = 1u << i;
		int bit = (n & mask) ? 1 : 0;
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
