#include <printf.h>

/*
 * 9. Write a C program that accepts two integers from the user and calculate the sum of the two integers.
 * Test Data :
 * Input the first integer: 25
 * Input the second integer: 38
 * Expected Output:
 * Sum of the above two integers = 63
*/

int main() {

    int first;
    int second;

    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("Sum of the above two integers = %i",first+second);

    return 0;
}