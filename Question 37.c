// Write a C program to concatenate two strings.
#include <stdio.h>
#include <string.h>
int main() {
    int size1;
    printf("Enter the maximum size of the 1st string :");
    scanf("%d" , &size1);
    
    char string1[size1+1];
    getchar();
    printf("Enter a string with no more than %d characters :" , size1);
    scanf("%[^\n]s" , string1);
    string1[size1]='\0';
    printf("The first string is %s" , string1);
    
    int size2;
    printf("\nEnter the maximum of the 2nd string :");
    scanf("%d" , &size2);
    
    char string2[size2+1];
    getchar();
    printf("\nEnter a string with no more than %d characters :" , size2);
    scanf("%[^\n]s" , string2);
    string2[size2]='\0';
    printf("The second string is %s" , string2);
    
   
    
    strcat(string1 , string2);
    printf("\nThe combined string is %s" , string1 );
    return 0;
}