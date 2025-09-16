//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

   if(a > b && a > c){
    printf("%d is greatest among three numbers", a);
   }

   else if(b > a && b > c){
    printf("%d is greatest among three numbers", b);
   }
    
   else if(c > b && c > a){
    printf("%d is greatest among three numbers", c); 
   } 

   return 0;
}
