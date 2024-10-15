// Write a C program to count the number of vowels in a string.

#include <stdio.h>

int main(){
  
int vowel=0;
int size;
int i;
printf("Enter the size of the array :");
scanf("%d" , &size);

char Ethan[size+1];
Ethan[size]='\0';
for(i=0 ; i<size ; i++){
    char input;
    printf("Enter element number %d of the string :" , i);
    scanf("\n%c" , &Ethan[i]);
}
 
for(i=0 ; i<size ; i++) {
    if(Ethan[i]=='a' || Ethan[i]=='A'){
        vowel=vowel+1;
    }
    
    else if(Ethan[i]=='e' || Ethan[i]=='E'){
        vowel=vowel+1;
    }
    
    else if(Ethan[i]=='i' || Ethan[i]=='I'){
        vowel=vowel+1;
    }
    
    else if(Ethan[i]=='o' || Ethan[i]=='O'){
        vowel=vowel+1;
    }
    
    else if(Ethan[i]=='u' || Ethan[i]=='U'){
        vowel=vowel+1;
    }
    
    else{
        continue;
    }
    
}   
    printf("The number of vowels in the string is %d:" , vowel);
    
    
    
    return 0;
}