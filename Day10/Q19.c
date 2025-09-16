//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the length of first side: ");
    scanf("%d", &a);

    printf("Enter the length of second side: ");
    scanf("%d", &b);
    
    printf("Enter the length of third side: ");
    scanf("%d", &c);

   if (a == b && b == c) {
    printf("Equilateral triangle");
   }

   else if (a == b && b != c && a != c) {
    printf("Isosceles triangle");
   }

   else if (a != b && b != c && a != c) {
    printf("Scalene triangle");
   }

   return 0;

}