// Online C compiler to run C program online
#include <stdio.h>
int powerfxn(int base , int exponent);
int main() {
   
   int base;
   printf("Enter the base number :");
   scanf("%d" , &base);
   
   int exponent;
   printf("Enter the exponent number :");
   scanf("%d" , &exponent);
   
    int result=powerfxn( base ,  exponent);
    printf("%d" , result);
    return 0;
}

 int powerfxn(int base , int exponent){
    
    if (exponent==0){
        return 1;
    }
    else{
        return base*powerfxn(base , exponent-1);
    }
   
    
}