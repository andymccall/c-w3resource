#include <printf.h>

/*
 * 12. Write a C program that accepts an employee's ID, total worked
 * hours of a month and the amount he received per hour. Print the
 * employee's ID and salary (with two decimal places) of a particular
 * month.
 * Test Data :
 * Input the Employees ID(Max. 10 chars): 0342
 * Input the working hrs: 8
 * Salary amount/hr: 15000
 * Expected Output:
 * Employees ID = 0342
 * Salary = U$ 120000.00
*/

int main () {

    char employeeId[10];
    int workingHours;
    double salaryHour;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &*employeeId);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%lf", &salaryHour);

    printf("Employees ID = %s\n", &*employeeId);
    printf("Salary = U$ %.2lf",salaryHour * workingHours);

    return 0;
}