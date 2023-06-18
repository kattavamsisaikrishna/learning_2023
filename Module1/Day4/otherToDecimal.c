#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void binaryToDecimal()
{
	int n;
	int i=0;
	int sum = 0;
	printf("Enter a binary number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		int r = n%10;
		sum += r*pow(2,i);
		n/=10;
		i++;
	}
	printf("Decimal = %d\n",sum);
}
void octalToDecimal()
{
	int n;
	int i=0;
	int sum = 0;
	printf("Enter an octal number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		int r = n%10;
		sum += r*pow(8,i);
		n/=10;
		i++;
	}
	printf("Decimal = %d\n",sum);
}
void hexToDecimal()
{
	int sum = 0;
	char s[100];
	printf("Enter a hex number : ");
	scanf("%s",s);
	int length = strlen(s);
	int j=0;
	for(int i = length-1 ; i >=0 ; i--)
	{
		
		if(s[i] >= '0' && s[i]<='9')
		{
			int n = s[i] - 48;
			sum+= n*pow(16,j++);
		}
		else if(s[i] >= 'A' && s[i]<='F')
		{
			int n = s[i] - 55;
			sum+= n*pow(16,j++);
		}
		else if(s[i] >= 'a' && s[i] <= 'f')
		{
			int n = s[i] - 87;
			sum+= n*pow(16,j++);
		}
		
	}
	printf("Decimal = %d\n",sum);
}
int main()
{
	while(1)
	{
		int option;
		printf("\n----------MENU----------\n");
		printf("1.Binary to Decimal\n");
		printf("2.Octal to Decimal\n");
		printf("3.Hex to Decimal\n");
		printf("4.exit\nPlease Enter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:binaryToDecimal();break;
			case 2:octalToDecimal();break;
			case 3:hexToDecimal();break;
			case 4:exit(0);break;
			default : printf("Enter correct oprion\n");
		}
		
	}
}
