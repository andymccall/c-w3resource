#include <stdio.h>

/*
 * 10. Write a C program that accepts two integers from the user and calculate the product
 * of the two integers. Go to the editor
 * Test Data :
 * Input the first integer: 25
 * Input the second integer: 15
 * Expected Output:
 * Product of the above two integers = 375
*/

int main() {

    int first;
    int second;

    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("Product of the above two integers = %i",first*second);

    return 0;
}
