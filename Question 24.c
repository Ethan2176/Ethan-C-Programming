#include <stdio.h>

int main() {
    int size ,i , sum=0;
    printf("Enter the size of the array : ");
    scanf("%d" , &size);
    int numbers[size];
    for(i=0;i<size;i++){
        int input;
        printf("Enter the integer you want :");
        scanf("%d" , &numbers[i]);
       
    }
     
     
     for(int p=0 ; p<size ; p++){
         sum=sum+numbers[p];
         
     }
     printf("The sum is %d" , sum.);

    return 0;
}