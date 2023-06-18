#include<stdio.h>
int stringToInteger(char s[])
{
	int i=0;
	int sum = 0;
	while(s[i]!='\0')
	{
		int n = s[i]-48;
		sum = sum*10 + n;
		i++;
	}
	return sum;
}
int main()
{
	char s[100];
	scanf("%s",s);
	int result = stringToInteger(s);
	printf("%d",result);
}
