/*
	converting 0.7 to ieee 754 double precision (64 bits)
	
	1  bit  --->  sign bit (0 for +ve and 1 for -ve)
	11 bits --->  exponent bits
	52 bits --->  mantissa
	
	1)first, converting 0.7 to binary
	  
	  0.7 x 2 = 1.4 |  1
	  0.4 x 2 = 0.8 |  0
	  0.8 x 2 = 1.6 |  1
	  0.6 x 2 = 1.2 |  1
	  0.2 x 2 = 0.4 |  0
	  
	  0.7 = 0.1 0110 0110 0110 0110 0110...........
	  
	2)shift the binary point so that single 1 to left of binary point
	Here, we need to shift the binary point to one position to right
	
	  1.011001100110011001100110..............
	  
	 3)calculatin bias, for double precision the bias will be 1023
	   we shifted binary point to one posion to the right
	   so, it will be 1023 + (-1) = 1022
	   
	   coverting  1022 to binary
	                      2) 1022      |  
	                          511      | 0
	                          255      | 1
	                          127      | 1
	                          63       | 1
	                          31       | 1
	                          15       | 1
	                          7        | 1
	                          3        | 1
	                          1        | 1
	     1022 =  01111111110
	     
	   0.7 = 0   01111111110  0110011001100110011001100110011001100110011001100110
	   
	   
*/
#include <stdio.h>

void printExponent(double num) {
    unsigned long long* ptr = (unsigned long long*)&num;
    unsigned long long bits = *ptr;
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    printf("Exponent (Hex): 0x%llX\n", exponent);

    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x ;
    scanf("%lf",&x);
    printExponent(x);
}

