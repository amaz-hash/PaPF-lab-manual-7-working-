#include <stdio.h>

double calculateSalary(double hoursWorked, double hourlyRate) {
    return hoursWorked * hourlyRate;
}
double calculateBonus(double salary, double bonusRate) {
    return salary * bonusRate;
}
double calculateDeductions(double salary, double deductionRate) {
    return salary * deductionRate;
}
int main() {
    double hoursWorked, hourlyRate, bonusRate, deductionRate;

    printf("Enter Hours Worked: ");
    scanf("%lf", &hoursWorked);
    printf("Enter Hourly Rate: ");
    scanf("%lf", &hourlyRate);
    printf("Enter Bonus Rate (e.g., 0.1 for 10%%): ");
    scanf("%lf", &bonusRate);
    printf("Enter Deduction Rate (e.g., 0.05 for 5%%): ");
    scanf("%lf", &deductionRate);

    double salary = calculateSalary(hoursWorked, hourlyRate);
    double bonus = calculateBonus(salary, bonusRate);
    double deductions = calculateDeductions(salary, deductionRate);
    double totalSalary = salary + bonus - deductions;

    printf("\n Payroll Details \n");
    printf("Salary: %.2lf\n", salary);
    printf("Bonus: %.2lf\n", bonus);
    printf("Deductions: %.2lf\n", deductions);
    printf("Total Salary: %.2lf\n", totalSalary);

    return 0;
}
