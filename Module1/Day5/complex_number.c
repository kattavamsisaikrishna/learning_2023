#include<stdio.h>
struct complex
{
	int real;
	int img;
};
typedef struct complex complex;
void read_complexNumber(complex *ptr)
{
	printf("Enter real number : ");
	scanf("%d",&ptr->real);
	printf("Enter imaginary number : ");
	scanf("%d",&ptr->img);
}
void write_complexNumber(complex *ptr)
{
	printf("%d + %di\n",ptr->real,ptr->img);
}
void add(complex *c1,complex *c2)
{
	printf("addition = %d + %di\n",(c1->real+c2->real),(c1->img+c2->img));
}
void multiply(complex *c1,complex *c2)
{
	//(a+ib)(c+id) = (ac-bd)+i(ad+bc)
	int ac = c1->real * c2->real;
	int bd = c1->img  * c2->img;
	int ad = c1->real * c2->img;
	int bc = c1->img  * c2->real;
	printf("multiplication = %d + %di\n",(ac-bd),(ad+bc));
	
}
int main()
{
	complex c1,c2;
	read_complexNumber(&c1);
	write_complexNumber(&c1);
	read_complexNumber(&c2);
	write_complexNumber(&c2);
	
	add(&c1,&c2);
	multiply(&c1,&c2);
}

