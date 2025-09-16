//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    int t, h, m, s, ls;
    printf("Enter time in seconds: ");
    scanf("%d", &t);

    h = t / 3600;
    s = t % 3600;

    m = s / 60;
    ls = s % 60;
    
    printf("%d:%d:%d is time", h, m, ls);

    return 0;

}