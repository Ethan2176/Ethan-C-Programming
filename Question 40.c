// Write a C program to remove all vowels from a string.
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the string :");
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
   
   printf("The number of elements in the string are %d" , p);
   printf("\nThe string to be considered is %s" , String);
   
   int L=0;
   char New_string[size];
   
   for(int i=0 ; i<p ; i++){
      char check=String[i];
       
       int vowelcheck=0;
       char vowels[]={'a' , 'A' , 'e' , 'E' , 'i' , 'I' , 'o' , 'O' , 'u' , 'U'};
       for(int q=0; q<10 ; q++){
           if(check==vowels[q]){
               vowelcheck=1;
               break;
           }
       }
       
       if(vowelcheck==0){
            New_string[L]=check;
            L++;
       }
   }
            
           
    New_string[L+1]='\0';
   
   printf("\nThe new string without vowel charactrs is %s" , New_string);
   
    return 0;
}
