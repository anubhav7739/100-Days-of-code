//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){

    float c,f;
     printf("Enter the temperature in celcius: ");
     scanf("%f", &c);

    f = (c * 9 / 5) + 32;
     printf("The temperature in Fahrenheit = %f", f);

    return 0;
}