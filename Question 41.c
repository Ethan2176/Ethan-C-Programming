// Write a C program to convert a string to uppercase.
#include <stdio.h>
# include <ctype.h>
int main() {
    int size;
    printf("Enter the maximum size of the string :");
    scanf("%d" , &size);
    
    char String[size+1];
    getchar();
    printf("Enter a string with no more than %d characters :" , size);
    scanf("%[^\n]s" , String);
    
    String[size]='\0';
    
    int p=0;
    
    while(String[p]!='\0'){
        p++;
    }
    
    printf("The string has a total of %d non-null characters." , p);
    printf("\nThe string to be considered is %s" , String);
    
    for(int i=0 ; i<size ; i++){
       String[i]=toupper(String[i]);
    }
    
    
    
    printf("\nThe uppercase string is %s" , String);
    
return 0;
}