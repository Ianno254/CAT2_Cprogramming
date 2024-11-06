#include <stdio.h>

int main() {
    float hours, hourly_wage, gross_pay, overtime_hours, tax, net_pay;
    
     printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    if (hours > 40) {
        overtime_hours = hours - 40;
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    } else {
        gross_pay = hours * hourly_wage;
    }
    
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }
    
    
    net_pay = gross_pay - tax;
    
    
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);
    
    return 0;
}
    