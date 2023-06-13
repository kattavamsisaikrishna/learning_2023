/*calculator program*/
#include<stdio.h>
void calculator(int number1,int number2,char operator)
{
    
    switch(operator)
    {
        case '+' : printf("%d",number1+number2);break;
        case '-' : printf("%d",number1-number2);break;
        case '*' : printf("%d",number1*number2);break;
        case '/' : printf("%d",number1/number2);break;
        default : printf("Enter the correct operator ");
    }
}
int main()
{
    int number1,number2;
    char operator;
    printf("Enter the number1 : ");
    scanf("%d",&number1);
    printf("Enter the operator : ");
    scanf(" %c",&operator);
    printf("Enter the number2 : ");
    scanf("%d",&number2);
    calculator(number1,number2,operator);

}