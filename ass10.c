// Read two numbers and display them before and after swapping.
#include <stdio.h>
int main() {
    int a,b,t;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Before: a=%d b=%d\n", a,b);
    t = a;
    a = b;
    b = t;
    printf("After: a=%d b=%d\n", a,b);
    return 0;     
}
