//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){

    int a, b, x;
    /*Let a be the first number,
    b be the second number and
    x be the temporary number swapped*/

    printf("Enter the value of two numbers:");
    scanf("%d %d", &a, &b);

    x = a;
    a = b;
    b = x;

    printf("After swap, the two numbers are:%d %d", a, b);

    return 0;
    
}