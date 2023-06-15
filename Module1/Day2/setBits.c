#include<stdio.h>
/*     let x = 9
       so  x = 1001
       count=0
       iteration 1 : 
       		     x & 1 = 1001
       		     	     0001
       		     	     ----
       		     	     	1
       increment count, count = 1
       x >> 1     then   x = 0100
       
       iteration 2:
       		     x & 1  = 0100
       		             0001
       		             ----
       		             	0
       x >> 1    then   x =  0010
       
       iteration 3:
       		     x & 1  = 0010
       		              0001
       		              ----
       		                 0
       x >> 1    then   x = 0001
       
       iteration 4:
                     x & 1 =  0001
                              0001
                              ----
                                 1
       increment count, then count = 2
       x >> 1 then x = 0000
       
       x = 0, stop
       			
       
*/
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
