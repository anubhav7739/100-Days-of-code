//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main() {

    float r;

    printf("Enter the value of radius: ");
    scanf("%f", &r);

    float pi = 3.14159265359;

    float circum = 2 * pi * r;
    float area = pi * r * r;

    printf("The circumference of the circle is = %f\n", circum);
    printf("The area of the circle is = %f", area);

    return 0;

}