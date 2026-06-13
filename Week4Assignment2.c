#include <stdio.h>

int main() {
    double balance, withdrawal;

    // Get initial balance
    printf("Enter your account balance: ");
    scanf("%lf", &balance);

    // While loop - runs as long as balance is greater than 0
    while (balance > 0) {
        printf("\nCurrent balance: KSh %.2lf\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);

        if (withdrawal > balance) {
            printf("Insufficient funds! You only have KSh %.2lf\n", balance);
        } else {
            balance -= withdrawal;
            printf("Withdrawal successful!\n");
            printf("Remaining balance: KSh %.2lf\n", balance);
        }
    }

    printf("\nYour balance is KSh %.2lf. No more withdrawals allowed.\n", balance);

    return 0;
}