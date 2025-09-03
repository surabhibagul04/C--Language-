// Take length and breadth as input and calculate the perimeter of a rectangle.
#include <stdio.h>
int main() {
    float length, breadth, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth); 
    printf(" Perimeter = %f", perimeter);
    return 0; 
}
