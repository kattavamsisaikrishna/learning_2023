#include<stdio.h>
void swap(void *a,void *b,size_t size)
{
	unsigned char *byteA = (unsigned char*)a;
	unsigned char *byteB = (unsigned char*)b;
	
	for(size_t i=0;i<size;i++)
	{
		unsigned char temp = byteA[i];
		byteA[i] = byteB[i];
		byteB[i] = temp;
	}
}
int main()
{
	double a,b;
	printf("Enter a : ");
	scanf("%lf",&a);
	printf("Enter b : ");
	scanf("%lf",&b);
	
	printf("Before swapping a = %lf and b = %lf\n",a,b);
	swap(&a,&b,sizeof(double));
	printf("after swapping a = %lf and b = %lf\n",a,b);
	
}
