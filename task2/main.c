#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * time * rate) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", interest);
    system ("pause");


    return 0;
}
