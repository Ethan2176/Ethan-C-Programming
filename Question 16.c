// Write a C program to find the sum of all odd numbers between 1 and 100.

#include <stdio.h>

int main() {
    int  sum=0 ;
    for(int p=1 ;p<=100; p++){
        if (p%2!=0){
            sum=sum+p;
        }
       
    }
    printf("The sum is %d" , sum);
}