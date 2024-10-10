// Write a C program to count the number of elements in an array.

#include <stdio.h>

int main(){
     int e;
printf("Enter the no of elements you want in the array : ");
     scanf("%d" , &e);
     
     int array[e];
     for (int i=0 ; i<e ; i++){
         int input;
         printf("Enter an integer to be put in array :");
         scanf("%d" , &array[i]);
     }
     
     int arraycount = sizeof(array)/sizeof(array[0]);
     printf("The size of the array is %d" , arraycount);
    
    
    
    
    return 0;
    
}