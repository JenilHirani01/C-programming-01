#include <stdio.h>
void main() 
{
    float gross_salary, allowance, deductions, net_salary;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary > 10000) {
        allowance = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
    } else if (gross_salary > 5000) {
        allowance = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    } else {
        allowance = 0;
        deductions = 0;
    }

    net_salary = gross_salary + allowance - deductions;

    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Allowance: %.2f\n", allowance);
    printf("Deductions: %.2f\n", deductions);
    printf("Net Salary: %.2f\n", net_salary);
}

