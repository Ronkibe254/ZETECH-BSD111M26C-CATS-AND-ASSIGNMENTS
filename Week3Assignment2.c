#include <stdio.h>

int main() {
    float units;
    double bill;

    // Collect input
    printf("Enter water units consumed: ");
    scanf("%f", &units);

    // Calculate bill using if-else 
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + ((units - 30) * 25);
    } else {
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    // Display result
    printf("Total water bill: %.2lf KES\n", bill);

    return 0;
}