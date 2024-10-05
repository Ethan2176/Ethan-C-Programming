// Write a C program to find the sum of all digits of a number.

#include <stdio.h>

int main() {
    int a , sum=0 , lnumber;
    printf("Enter a number of your choice :");
    scanf("%d" , &a);
    
    while (a>0) {
    lnumber=a%10;
    sum+=lnumber;
    a=a/10;
    }
    
    
    printf("The sum of all the digits of the number are %d :" , sum);
    
    return 0;
}
