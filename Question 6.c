// Write a C program to swap two numbers using a temporary variable.

# include <stdio.h>

int main() {
    int a,b ,tempo;
printf("Enter two numbers which you want to swap using a temporary variable:");

scanf("%d %d" , &a,&b);

printf("The values of the two numbers before swapping are %d and %d" , a ,b );

tempo=a;
a=b;
b=tempo;

printf("\nThe values of the two numbers after swapping are %d and %d" , a ,b );
return 0;


}