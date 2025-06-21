#include <stdio.h>
#include <stdlib.h>


int main() {
    float rate_per_usd = 3500.0; // UGX needed for 1 USD
    float usd_amount = 700.0;    // USD amount to exchange
    float total_ugx;

    // Calculate total UGX needed
    total_ugx = rate_per_usd * usd_amount;

    // Display the result
    printf("UGX needed to buy %.2f USD: %.2f\n", usd_amount, total_ugx);

    return 0;
}



