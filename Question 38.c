// Write a C program to check if a string is a palindrome.
#include <stdio.h>
#include <stdbool.h>
int main() {
    
    int p=0;
    bool Palindrome=0;
    int size;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    
    char Ethan[size+1];
    
    getchar();
    printf("Enter a string with less than %d characters :" , size);
    scanf("%[^\n]s" , Ethan);
    Ethan[size]='\0';
    
   while (Ethan[p]!=0){
       p++;
   } 
   
   printf("%d" , p);
   
   
    printf("This is the string which will be considered %s" , Ethan);
    
    for (int i=0 ; i<p ; i++){
        if(Ethan[i]==Ethan[p-1-i]){
           Palindrome=1;
           continue;
        }
        
        else{
            Palindrome=0;
            break;
        }
    }
    
    if(Palindrome==1){
        printf("\nThe string is a Palindrome.");
    }
    
    else{
        printf("\nThe string is not a Palindrome.");
    }

    return 0;
}