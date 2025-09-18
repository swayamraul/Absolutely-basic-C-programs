#include <stdio.h>

// Program to calculate the area of a 4 sided shape.

int main() {

    int l, b;

    // Taking input for first side
    printf("enter length of first side: ");
    scanf("%d", &l);

    // Taking input for second side
    printf("enter length of second side: ");
    scanf("%d", &b);

    // Calculating and displaying the area
    printf("the area is: %d", l * b);

    return 0;
}
