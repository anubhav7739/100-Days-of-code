//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;

    /*quadratic equation
    ax^2 + bx + c = 0*/

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

   double D, r1, r2; //discriminant, root 1, root 2
   D = b * b - 4 * a * c;
   r1 = (-b + sqrt(D)) / (2 * a);
   r2 = (-b - sqrt(D)) / (2 * a);

   if (D == 0){
    printf("Roots of this equation are real and equal\n");
    printf("Root 1 = Root 2 = %.2lf\n", r1);
    
   }

   else if (D >= 0) {
    printf("Roots are real and distinct\n");
    printf("Root 1 = %.2lf\n", r1);
    printf("Root 2 = %.2lf\n", r2);
   }

   else if (D <= 0) {
    printf("Roots are complex and imaginary\n");
    double real, img;
    real = -b / (2 * a);
    img = sqrt(-D) / (2 * a);
    printf("Root 1 = %.2lf + i%.2lf\n", real, img);
    printf("Root 2 = %.2lf - i%.2lf\n", real, img);
   }

   return 0;

}