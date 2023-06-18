#include<stdio.h>
#include<ctype.h>
void toggleCase(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(isupper(s[i]))
		{
			s[i] = tolower(s[i]);
		}
		else if(islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
}
int main()
{
	char s[100];
	scanf("%[^\n]",s);
	int i=0;
	toggleCase(s);
	printf("%s",s);
}
