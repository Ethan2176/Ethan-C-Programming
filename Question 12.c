// Write a C program to find the factorial of a number using a loop.

# include <stdio.h>

int main() {
    int a ,b=1 ,factorial=1 ;
    printf("Enter a number of your choice");
    scanf("%d" , &a);
    for (b=1; b<=a ; b=b+1){
         factorial=factorial*b;
         
        
    }
    
printf("Factorial is %d" , factorial);
    return 0;
}
    