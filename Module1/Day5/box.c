#include<stdio.h>
struct box
{
	int length;
	int width;
	int height;
};
typedef struct box box;
int main()
{
	box b;
	printf("Enter length : ");
	scanf("%d",&b.length);
	printf("Enter width : ");
	scanf("%d",&b.width);
	printf("Enter height : ");
	scanf("%d",&b.height);
	
	box *ptr = &b;
	int volume = ptr->length*ptr->width*ptr->height;
	int total_surface_area = 2*((*ptr).length * (*ptr).width + (*ptr).length * (*ptr).height + (*ptr).height * (*ptr).width);
	
	printf("volume = %d\n",volume);
	printf("total surface area = %d",total_surface_area);
}
