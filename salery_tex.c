#include <stdio.h>

int main() {
    float salary, tax_rate, tax_amount, net_salary;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("Enter the tax percentage: ");
    scanf("%f", &tax_rate);

    
    tax_amount = (tax_rate / 100.0) * salary;
    net_salary = salary - tax_amount;

    
    printf("Tax amount: %f\n", tax_amount);
    printf("Net salary: %f\n", net_salary);

    return 0;
}




