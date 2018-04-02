/*
 * 5. Write a C program to compute the perimeter and area of a rectangle
 * with a height of 7 inches. and width of 5 inches. Go to the editor
 * Expected Output:
 * Perimeter of the rectangle = 24 inches
 * Area of the rectangle = 35 square inches
 *
*/

#include <stdio.h>

int main() {

    int height = 7;
    int width = 5;

    int area = height * width;
    int perimeter = 2*(height + width);

    printf("Perimeter of the rectangle = %i inches\n", perimeter);
    printf("Area of the rectangle = %i square inches\n", area);

    return 0;

}