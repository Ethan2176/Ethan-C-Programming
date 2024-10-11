// Write a program to sort numbers in an array in ascending order.

#include <stdio.h>

int main()
{
    int size ;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    
    int numbers[size];
    for(int i=0 ;i<size ;i++){
        int input;
        printf("Enter a number :");
        scanf("%d" , &numbers[i]);
    }
    
    for (int q=0 ; q<size-1 ; q++){
        
        
        for(int p=0 ; p<size-1 ; p++){
        if(numbers[p]>numbers[p+1]){
            int temp=numbers[p+1];
            numbers[p+1]=numbers[p];
            numbers[p]=temp;
        }
    }
        
    }
    
    
    
    
    
    for(int o=0 ; o<size ; o++){
         printf("\n%d", numbers[o]);
    }
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}