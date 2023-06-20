#include<stdio.h>
struct mystruct
{
	int a;
	int b;
};
void swap(struct mystruct *s1,struct mystruct *s2)
{
	int temp;
	temp = s1->a;
	s1->a = s2->a;
	s2->a = temp;
	
	temp = s1->b;
	s1->b = s2->b;
	s2->b = temp; 
}
int main()
{
	struct mystruct s1 = {10,20};
	struct mystruct s2 = {30,40};
	
	printf("Before swapping : s1 = %d %d  s2 = %d %d\n",s1.a,s1.b,s2.a,s2.b);
	
	swap(&s1,&s2);
	
	printf("After swapping : s1 = %d %d  s2 = %d %d",s1.a,s1.b,s2.a,s2.b);
	
}
