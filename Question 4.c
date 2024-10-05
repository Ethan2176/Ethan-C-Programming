// Write a C program to perform basic arithmetic operations (addition, subtraction, multiplication, division).

# include <stdio.h>

int main() {
    int a,b;
    printf("Enter any two numbers of your choice :");
    scanf("%d %d" , &a , &b);
    printf("The sum of the two numbers is %d" , a+b);
    printf("\nThe difference of the two numbers is %d" , a-b);
    printf("\nThe product of the two numbers is %d" , a*b);
    printf("\nThe quotient of the two numbers after divison is %d" , a/b);
    
    return 0;
    
    
}