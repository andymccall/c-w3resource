#include <stdio.h>

/*
 * 4. Write a C program to print the following characters in a reverse way. Go to the editor
 * Test Characters: 'X', 'M', 'L'
 * Expected Output:
 * The reverse of XML is LMX
*/

int main() {

    char charX = 'X';
    char charM = 'M';
    char charL = 'L';

    printf("The reverse of %c%c%c is %c%c%c",
        charX,charM,charL,
        charL,charM,charX);

}