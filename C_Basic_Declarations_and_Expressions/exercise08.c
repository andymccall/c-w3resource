#include <printf.h>

/*
 * 8. Write a C program to convert specified days into years, weeks and days.
 * Note: Ignore leap year.
 *
 * Test Data :
 * Number of days : 1329
 * Expected Output :
 * Years: 3
 * Weeks: 33
 * Days: 3
*/

int main() {

    int days = 1329;

    int numberOfYears = days / 365;
    int numberOfWeeks = (days % 365) / 7 ;
    int numberOfDays = (days % 365) % 7;

    printf("Years : %i\n", numberOfYears);
    printf("Weeks : %i\n", numberOfWeeks);
    printf("Days : %i\n", numberOfDays);

    return 0;
}