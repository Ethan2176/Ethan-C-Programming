// Write a C program to remove duplicate elements from an array.

 #include <stdio.h>
 int main()
 {
     int size , outer , inner , decr;
     printf("Enter the  size of the array :");
     scanf("%d" ,&size );
     
     int Ethan[size];
     for(int i=0 ; i<size ;i++){
         int input;
         printf("Enter the number you want :");
         scanf("%d" , &Ethan[i]);
     }
     
     for(outer=0 ; outer<size ; outer++)
     {
         for(inner=outer+1 ; inner<size ; inner++)
         {
             if(Ethan[inner]==Ethan[outer])
             {
                 for(decr=inner ; decr<size; decr++)
                 {
                     Ethan[decr]=Ethan[decr+1];
                 }
                 size--;
                 inner--;
             }
         }
     }
     
     printf("After the duplicate elements are deleted , the array is:\n");
     
     for(int i=0 ; i<size ;i++ ){
         printf("%d\n" , Ethan[i]);
     }
     
     return 0;
 }