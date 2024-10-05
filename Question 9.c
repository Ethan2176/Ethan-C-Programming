// Write a C program to check if a number is even or odd.

# include <stdio.h>

int main() {
    int a;
    printf("Enter a number of your choice :");
    scanf("%d" , &a);
    
    if (a%2==0) {
        printf("The entered number is even.");
    }
    else {
        printf("The entered number is odd.");
    }
    
    return 0;

}