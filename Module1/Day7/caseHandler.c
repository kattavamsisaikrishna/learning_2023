#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void copyFile(FILE *src, FILE *dest, int option)
{
    char c;
    int capitalize = 1;
    while ((c = fgetc(src)) != EOF)
    {
        if (option == 1) 
        {
            fputc(toupper(c), dest);
        }
        else if (option == 2) 
        {
            fputc(tolower(c), dest);
        }
        else if (option == 3) 
        {
            if (capitalize && isalpha(c))
            {
                fputc(toupper(c), dest);
                capitalize = 0;
            }
            else
            {
                fputc(tolower(c), dest);
            }

            if ( c == '\t' || c == '\n' || c == ' ')
            {
                capitalize = 1;
            }
        }
        else 
        {
            fputc(c, dest);
        }
    }
}
void filecopy(FILE *fp1,FILE *fp2)
{
	char *ptr = NULL;
	size_t length = 0;
	while(getline(&ptr,&length,fp1) != -1)
	{
		fprintf(fp2,"%s",ptr);
	}
	free(ptr);
}
int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("f1.txt","r");
	fp2 = fopen("f2.txt","w");
	
	int option;
	printf("Enter 1 for uppercase \n");
	printf("Enter 2 for lowercase\n");
	printf("Enter 3 for capitalize\n");
	printf("Enter 4 for normal copy\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:	copyFile(fp1,fp2,1);printf("file copied\n");break;
		case 2: copyFile(fp1,fp2,2);printf("file copied\n");break;
		case 3: copyFile(fp1,fp2,3);printf("file copied\n");break;
		case 4: filecopy(fp1,fp2);printf("file copied\n");break;	
	}
}
