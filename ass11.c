// Input values of Principal (P), Rate (R), and Time (T). Calculate and print simple interest = (P×R×T)/100.
#include <stdio.h>
int main (){
    float SI, P, R, T;
    printf("Enter principle amount: ");
    scanf("%f", &P); 
    printf("Enter rate: ");
    scanf("%f", &R);
    printf("Enter time: ");
    scanf("%f", &T);
    SI = (P* R* T) / 100;
    printf("Simple Interest: %f\n", SI);
    return 0; 

}
