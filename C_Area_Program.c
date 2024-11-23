// Author: @aadesh006
// This program calculates the area of a circle, square, or rectangle.
#include <stdio.h>
#include <math.h>

void AreaofCircle() {
    float r;
    printf("\nEnter the radius of the circle in meters: ");
    scanf("%f",&r);
    float area = 3.1415 * pow(r, 2);
    printf("The area of the circle is: %.3f m^2",area);
}

void AreaofSquare() {
    float a;
    printf("Enter the side of Square in meters: ");
    scanf("%f",&a);
    float area = pow(a, 2);
    printf("The area of the square is: %.3f m^2",area);
}

void AreaofRectangle() {
    float l, b;
    printf("Enter the Length and Breadth of Rectangle in meters: ");
    scanf("%f %f",&l,&b);
    float area = l * b;
    printf("The area of rectangle is: %.3f m^2",area);
}

int main() {
    char ch;
    printf("Do you want to calculate the area of Circle, Square or Rectangle?\n\n");
    printf("Choose your shape:\nC for Circle\nS for Square\nR for Rectangle\n");
    scanf("%c",&ch);
    if (ch == 'C' || ch == 'c') {
        AreaofCircle();
    } else if (ch == 'S' || ch == 's') {
        AreaofSquare();
    } else if (ch == 'R' || ch == 'r') {
        AreaofRectangle();
    } else {
        printf("Invalid choice. Please try again.");
    }
    return 0;
}