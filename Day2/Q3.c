//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main() {

    int l, b;

    printf("Enter the length of rectangle:");
    scanf("%d", &l);

    printf("Enter the breadth of rectangle:");
    scanf("%d", &b);

    int perimeter = 2*(l+b);
    int area = l*b;

    printf("The perimeter of rectangle is = %d\n", perimeter);
    printf("The area of rectangle is = %d", area);

     return 0;

}