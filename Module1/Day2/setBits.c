#include<stdio.h>
int noOfSetBits(int x)
{
	int count = 0;
	while(x!=0)
	{
		count = count + ( x & 1);
		x = x >> 1;
	}
	return count;
}
int main()
{	
	int a[3] = {0x1, 0xF4, 0x10001};
	int sum = 0;
	for(int i=0;i<3;i++)
	{
		sum += noOfSetBits(a[i]);
	}
	printf("Total no. of set bits = %d",sum);
}
