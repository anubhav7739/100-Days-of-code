//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%C", &ch);

  if(isalpha(ch)){
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("This alphabet is a VOWEL");
        } else{ printf("This alphabet is a CONSONANT");
        }

  } else{
    printf("It is not an alphabet");
  }  
 return 0; 
}