// Read two numbers and print their quotient. (Hint: use float for division).
#include <stdio.h>
int main() {
    float a,b;
    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter second number:");
    scanf("%f", &b);
    printf("Result: %f\n", a/b);
    return 0; 
}