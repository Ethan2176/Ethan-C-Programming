// Write a C program to reverse an array.

# include <stdio.h>

int main() {
    
    int size;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    
    int array[size];
    for( int i=0 ; i<size ; i++){
        int input;
        printf("Enter an integer value for the array :");
        scanf("%d" , &array[i]);
        }
    
     int reverse[size];
     
     for (int p=0 ; p<size ; p++){
        reverse[p]=array[size-1-p];
           printf("\n%d" , reverse[p]);
         
         }
       
         
        
   
   
    
    
    
    
    
    
}
