// Write a C program to reverse a string.
#include <stdio.h>

int main() {
    int size;
    int i;
    printf("Enter the size of string :");
    scanf("%d" , &size);
    
    char str[size+1];
    for (int i=0 ; i<size ; i++){
        
 printf("Enter the number %d element you want in the string :", i);
  scanf("\n%c" , &str[i]);
    }
    
    str[size]='\0';
    printf("The string is %s" , str);
    
 char reverse[size+1];
 
 for (int i=0 ; i<size ; i++){
     reverse[i]=str[size-1-i];
 }
 reverse[size]='\0';
 
 printf("\nThe reverse of the string is %s" , reverse );
    
    
    

    return 0;
}