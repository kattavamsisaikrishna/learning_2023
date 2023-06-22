#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("example.txt","r");
	fp2 = fopen("myfile.txt","w");
	
	char *ptr = NULL;
	size_t length = 0;
	while(getline(&ptr,&length,fp1) != -1)
	{
		fprintf(fp2,"%s",ptr);
	}
	free(ptr);
}
