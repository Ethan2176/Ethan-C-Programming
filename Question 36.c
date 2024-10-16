// Write a C program to copy one string to another.
#include <stdio.h>
#include<string.h>
int main() {
    int size;
    printf("Enter the size of string :");
    scanf("%d" , &size);
    
    char string1[size+1];
     getchar();
    printf("Enter the string with no more than %d characters :" , size);
    scanf("%[^\n]s" , string1);
     string1[size]='\0';
    printf("%s : This is the string to be considered" , string1);
    
    char string2[size+1];
    strcpy(string2 , string1);
    printf(" \nThe second string is %s :" , string2);
    


    return 0;
}