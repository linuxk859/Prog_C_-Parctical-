#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int x = 12, y = 10;
    int p = 5, q = 10;

    //Logical operators
    printf("Logical Operators:\n");
    printf("a && b = %d\n", a && b); 
    printf("a || b = %d\n", a || b); 
    printf("!a = %d\n", !a); 
    // Bitwise operators
    printf("\nBitwise Operators:\n");
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y); 
    printf("x ^ y = %d\n", x ^ y); 
    printf("~x = %d\n", ~x); 
    printf("x << 1 = %d\n", x << 1); 
    printf("x >> 1 = %d\n", x >> 1); 

    //Unary operators
    printf("\nUnary Operators:\n");
    printf("++p = %d\n", ++p);
    printf("--q = %d\n", --q); 

    //Ternary operator
    int result = (a > b) ? a : b;
    printf("\nTernary Operator:\n");
    printf("The greater value between a and b is: %d\n", result);

    return 0;
}
