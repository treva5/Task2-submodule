#include <stdio.h>

int main() {
    float price, tax_rate, total_cost;

    // Assign a fixed tax rate (for example, 15%)
    tax_rate = 0.15;

    // Input product price
    printf("Enter product price: ");
    scanf("%f", &price);

    // Calculate total cost including tax
    total_cost = price + (tax_rate * price);

    // Display the total cost
    printf("Total Cost including tax = %.2f\n", total_cost);
    system("pause");

    return 0;
}
