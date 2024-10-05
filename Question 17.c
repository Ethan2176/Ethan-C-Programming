// print negative odd number , +ve number end loop (positive value message) , negative even skip with message negative even.
#include <stdio.h>

int main() {
    
    
    while(1) {
        int number;
    printf("Enter a number of your choice :");
    scanf("%d" , &number);
    
    
        if (number >=0){
            printf("Positive Number");
            break;
        }
        
        else if (number<0 && number%2 ==0){
            printf("negative even number\n");
            continue;
        }
printf("The value is %d\n" , number);
        
    }

    return 0;