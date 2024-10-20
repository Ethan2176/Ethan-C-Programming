// Write a C program to find the factorial of a number using recursion.
#include <stdio.h>
int Factorial(int Number);
int main() {
    
    int c;
    printf("Enter a number of your choice:");
    scanf("%d" , &c);
    Factorial(c);
    
    
    return 0;
}
int Factorial(int Number){
        int Factorial=1;
        for(int b=1 ; b<=Number ; b++){
          Factorial=Factorial*b;  
        }
        printf("The factorial of the entered number is %d" , Factorial);
    }