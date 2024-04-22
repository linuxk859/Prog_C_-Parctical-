#include <stdio.h>
#include <math.h>

int main() {
    
    float principal, rate;
    int time;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%d", &time);

    //simple interest
    float simpleInterest = (principal * rate * time) / 100;

    // compound interest
    float compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    // Display results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
