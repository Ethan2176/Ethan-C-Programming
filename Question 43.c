// Write a C program to find the factorial of a number using recursion.
#include <stdio.h>
int Factorial(int Number);
int main() {
    
    int c;
    printf("Enter a number :");
    scanf("%d" , &c);
    
    printf("The factorial is %d" ,Factorial(c));
    
    
    
    return 0;
}

int Factorial(int Number){
    
    if (Number==1){
        return 1;
    }
    
    return Number*Factorial(Number-1);
    
}