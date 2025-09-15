//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    float a, b;
    
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    float sum, diff, prod, quo;

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;

    if (b == 0) {
        quo = 0;
    } else {
        quo = a / b;
    }

    printf("%.2f\n", sum);
    printf("%.2f\n", diff);
    printf("%.2f\n", prod);
    printf("%.2f\n", quo);

    return 0;
    
}