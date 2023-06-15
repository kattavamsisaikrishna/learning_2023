#include <stdio.h>
int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= (1 << 0);   // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 30);  // Clear 31st bit
            break;
        case 3:
            num ^= (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    return num;
}

int main()
{
    int num; 
    int operation_type; 
    printf("Enter number :");
    scanf("%d",&num);
    printf("Enter operation type :");
    scanf("%d",&operation_type);
    
    int result = bit_operations(num, operation_type);
    printf("Result: %d\n",result);
    return 0;
}

