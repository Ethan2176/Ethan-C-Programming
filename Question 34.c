// Write a C program to count the number of vowels in a string.

#include <stdio.h>

int main(){
  
int consonant=0;
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
        consonant=0;
    }
    
    else if(Ethan[i]=='e' || Ethan[i]=='E'){
        consonant=0;
    }
    
    else if(Ethan[i]=='i' || Ethan[i]=='I'){
        consonant=0;
    }
    
    else if(Ethan[i]=='o' || Ethan[i]=='O'){
        consonant=0;
    }
    
    else if(Ethan[i]=='u' || Ethan[i]=='U'){
        consonant=0;
    }
    
    else{
        consonant =consonant+1;
    }
    
}   
    printf("The number of consonants in the string is %d:" , consonant);
    
    
    
    return 0;
}