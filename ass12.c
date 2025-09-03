// Convert Celsius to Fahrenheit using formula F = (C × 9/5) + 32.
#include <stdio.h>
int main() {
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, (c * 9/5) + 32);
    return 0;
}
