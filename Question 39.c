// Write a C program to find the frequency of characters in a string.
#include <stdio.h>

int main() {
   int inner=0;
   int p=0;
   int size;
   printf("Enter the size of the string :");
   scanf("%d" , &size);
   
   char Ethan[size+1];
   getchar();
   printf("Enter a string with no more than %d characters :" , size);
   scanf("%[^\n]s" , Ethan);
   Ethan[size]='\0';
   
   while(Ethan[p]!='\0'){
       p++;
   }
   
   printf("%s" , Ethan);
   printf("\nThis string has %d characters." , p);
   int Frequency[p];
   
   for(int i=0 ; i<p ; i++){
       Frequency[i]=-1;
   }
   
   
   
   int outer=0;
   
   for(outer=0 ; outer<p ; outer++){
       int count=1;
       if(Frequency[outer]!=-1){
           continue;
       }
       
       for(inner=outer+1 ; inner<p ; inner++){
           if (Ethan[inner]==Ethan[outer]){
               count++;
               Frequency[inner]=0;
           }
       }
       Frequency[outer]=count;
   }
   
  
       for (int q=0 ; q<p ; q++){
           
           if (Frequency[q]!=0){
         printf("\nThe frequency of %c is %d" , Ethan[q] , Frequency[q]);
           }
      
   }
   
   
   
   
    return 0;
}