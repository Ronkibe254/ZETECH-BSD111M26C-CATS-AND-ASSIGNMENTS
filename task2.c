#include <stdio.h>

int main(void) {
    float height;
    double BankBalance;
    char PhoneNo[10];
    //collecting user input
    printf("Enter your height in meters or centimeters: ");
    scanf("%f", &height);   
    printf("Enter your bank balance: ");
    scanf("%lf", &BankBalance); 
    printf("Enter your phone number: ");
    scanf("%s", PhoneNo);
// displaying the collected data
    printf("Your height is: %.2f\n", height);
    printf("Your bank balance is: %.2lf\n", BankBalance);
    printf("Your phone number is: %s\n", PhoneNo);

    return 0;
}



