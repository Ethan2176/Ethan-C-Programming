// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int size;
   printf("Enter the size of the array :");
   scanf("%d" , &size);
   int array[size];
   
   for (int i=0 ; i<size ; i++){
       array[i]=i*2;
       printf("\n%d" , array[i]);
       
   }
   int max=array[0];
   
   for(int p=0 ; p<size;p++){
       if(array[p]>max){
           max=array[p];
       }
       else{
           continue;
       }
   }
   printf("\n%d is the maximum element." , max);
   
  return 0;
}
   
 




          
       