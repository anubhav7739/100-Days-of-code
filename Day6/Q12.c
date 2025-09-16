//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){

    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

if(x>0){
    printf("Positive");
}    

else if(x>0){
    printf("Negative");
}

else if(x==0){
    printf("Neither positive nor negative, it is zero");
}

return 0;
}