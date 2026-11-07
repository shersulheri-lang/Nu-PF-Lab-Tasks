#include <stdio.h>

int main() {
    int pennies = 368;
    int quarters, dimes;
    int nickels, remaining;

    quarters = pennies / 25;
    remaining = pennies % 25;

    dimes = remaining / 10;
    remaining = remaining % 10;

    nickels = remaining / 5;
    pennies = remaining % 5;

    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);

    return 0;
}