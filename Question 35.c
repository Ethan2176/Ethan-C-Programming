// Write a C program to find the length of a string without using the strlen function.
#include <stdio.h>

int main() {
   int i=0 ;
   int size;
   printf("Enter the maximum size of the string :");
   scanf("%d" , &size);
   
   char str2[size];
   getchar();
   printf("Enter a string with less than %d characters : " , size);
   fgets(str2 , sizeof(str2) , stdin);

   printf("%s This is what the compiler will read" , str2);
  
  while(str2[i]!=0){
      i++;
  }

printf("\nThe size of the string entered by user is %d :" ,i);



    return 0;
}