// Write a C program to find the size of int, float, double, and char data types.

# include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;
    
 printf("The size of the int data type is %d bytes." ,sizeof(a));
 printf("\nThe size of the float data type is %d bytes." ,sizeof(b));
 printf("\nThe size of the double data type is %d bytes" , sizeof(c));
 printf("\nThe size of the char data type is %d bytes" , sizeof(d));
 
 
    return 0;
}