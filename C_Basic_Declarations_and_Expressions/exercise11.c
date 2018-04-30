#include <stdio.h>

/* 11. Write a C program that accepts two item’s weight (floating points' values )
 * and number of purchase (floating points' values) and calculate the average
 * value of the items. Go to the editor
 * Test Data :
 * Weight - Item1: 15
 * No. of item1: 5
 * Weight - Item2: 25
 * No. of item2: 4
 * Expected Output:
 * Average Value = 19.444444
*/

int main () {

    double firstWeight;
    double secondWeight;
    double firstItems;
    double secondItems;

    double result;

    printf("Weight - Item1: ");
    scanf("%lf", &firstWeight);
    printf("No. of Item1: ");
    scanf("%lf", &firstItems);
    printf("Weight - Item2: ");
    scanf("%lf", &secondWeight);
    printf("No. of Item2: ");
    scanf("%lf", &secondItems);
    result = ((firstWeight * firstItems) + (secondWeight * secondItems)) / (firstItems + secondItems);
    printf("Average Value = %f",result);

    return 0;
}

