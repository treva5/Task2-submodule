#include <stdio.h>
#include <stdlib.h> // Needed for system()

int main() {
    float price, discount_percentage, discounted_price;

    // Input original price and discount percentage
    printf("Enter original price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount_percentage);

    // Calculate discounted price
    discounted_price = price - (price * discount_percentage / 100);

    // Display the discounted price
    printf("Discounted Price = %.2f\n", discounted_price);
    system("pause");// This willnow work if you added #include <stdlib.h>


    return 0;
}

