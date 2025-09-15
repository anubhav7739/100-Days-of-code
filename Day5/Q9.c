//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main() {
    double p, r, t;

    printf("Enter the value of Principle amount: ");
    scanf("%lf", &p);

    printf("Enter the value of rate interest: ");
    scanf("%lf", &r);

    printf("Enter the value of time: ");
    scanf("%lf", &t);

   double si, ci, a;

    si = (p * r * t) / 100;

    a = p * pow(1 + r / 100, t);

    ci = a - p;

    printf("Simple interest = %g", si);
    printf("\n");
    printf("Compound Interest = %.2f", ci);

    return 0;


}