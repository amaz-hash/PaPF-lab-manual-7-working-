#include <stdio.h>

char productNames [20];
int quantities;
double pricesPerUnit;
int productCount = 0;

void addProductToCart(char productName[], int quantity, double pricePerUnit)
{
    (productNames, productName);
    quantities = quantity;
    pricesPerUnit = pricePerUnit;
    productCount++;
    printf("%s added to the cart. Quantity: %d, Price per unit: %.2lf\n", productName, quantity, pricePerUnit);
}

double calculateCartTotal() {
    double total ;
    for (int i = 0; i < productCount; i++) {
        total += quantities * pricesPerUnit;
    }
    return total;
}

double applyDiscount(double totalAmount, double discountRate) {
    return totalAmount * discountRate;
}

void checkout(double discountRate) {
    double totalAmount = calculateCartTotal();
    double discountedAmount = applyDiscount(totalAmount, discountRate);

    printf("\n Checkout Summary \n");
    printf("Total amount before discount: %.2lf \n", totalAmount);
    printf("Total amount after discount: %.2lf \n", discountedAmount);
}

int main() {
    char productName[50];
    int quantity;
    double pricePerUnit, discountRate;

    printf("Enter details for Product 1:\n");
    printf("Name: ");
    scanf("%s", productName);
    printf("Quantity: ");
    scanf("%d", &quantity);
    printf("Price per unit: ");
    scanf("%lf", &pricePerUnit);
    addProductToCart(productName, quantity, pricePerUnit);

    printf("\nEnter details for Product 2:\n");
    printf("Name: ");
    scanf("%s", productName);
    printf("Quantity: ");
    scanf("%d", &quantity);
    printf("Price per unit: ");
    scanf("%lf", &pricePerUnit);
    addProductToCart(productName, quantity, pricePerUnit);

    printf("\nEnter Discount Rate (e.g., 0.1 for 10%): ");
    scanf("%lf", &discountRate);

    checkout(discountRate);

    return 0;
}