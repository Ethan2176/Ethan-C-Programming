// Write a C program to swap two numbers without using a temporary variable.

# include <stdio.h>

int main() {
    int a,b;
    printf("Enter two numbers of your choice :");
    scanf("%d %d" , &a,&b);
    
    printf("The values of the two numbers before swapping are %d %d respectively" , a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\nThe values of the two numbers after swapping are %d %d respectively" , a,b);
    
    return 0;
}