#include <stdio.h>
#include <math.h>

/*
 * 6. Write a C program to compute the perimeter and area of a circle with a radius of 6
 * inches.
 * Expected Output:
 * Perimeter of the Circle = 37.680000 inches
 * Area of the Circle = 113.040001 square inches
*/

int main() {

    int radius = 6;

    float perimeter = 2*M_PI*radius;
    float area = M_PI*radius*radius;

    printf("Perimeter of the circle = %f inches\n", perimeter);
    printf("Area of the circle = %f square inches\n", area);

    return 0;

}