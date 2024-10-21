// Write a C program to find the Fibonacci series using recursion.

#include <stdio.h>
int Fibonacci (int Number);
int main(){
    
    int Number;
    printf("Enter no of terms you want :");
    scanf("%d", &Number);
    printf("The Fibonacci Series is :");
    for(int i=0 ; i<Number ; i++){
        printf("%d " , Fibonacci(i));
    }
    
   
   
    return 0;
}

int Fibonacci (int Number){
    
    if(Number==1 || Number==0){
        return Number;
    }
    else{
        return Fibonacci(Number-1)+Fibonacci(Number-2);
    }
    
}