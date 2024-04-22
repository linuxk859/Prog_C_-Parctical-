#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price) {
        // Profit
        profit = selling_price - cost_price;
        printf("Profit: %.2f\n", profit);
    } else if (selling_price < cost_price) {
        // Loss
        loss = cost_price - selling_price;
        printf("Loss: %.2f\n", loss);
    } else {
        // No profit, no loss
        printf("No profit, no loss.\n");
    }

    return 0;
}
