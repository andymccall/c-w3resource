#include <printf.h>
#include <stdlib.h>

/* 13. Write a C program that accepts three integers and find
 * the maximum of three. Go to the editor
 * Test Data :
 * Input the first integer: 25
 * Input the second integer: 35
 * Input the third integer: 15
 * Expected Output:
 * Maximum value of three integers: 35
*/

int main() {

    int firstInteger;
    int secondInteger;
    int thirdInteger;
    int result;
    int max;

    printf("Input the first integer: ");
    scanf("%d", &firstInteger);
    printf("Input the second integer: ");
    scanf("%d", &secondInteger);
    printf("Input the third integer: ");
    scanf("%d", &thirdInteger);

    result=(firstInteger+secondInteger+abs(firstInteger-secondInteger))/2;
    max=(result+thirdInteger+abs(result-thirdInteger))/2;

    printf("\nMaximum value of three integers: %d", max);

    return 0;

}

