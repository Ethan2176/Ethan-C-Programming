// Write a C program to add two numbers.

#include <stdio.h> 

int main() {
    int a,b,c;
    printf("Enter two numbers of your choice :");
    scanf("%d %d" , &a,&b);
    c=a+b;
    printf("The sum of the two entered numbers is %d" , c);
    return 0;
}