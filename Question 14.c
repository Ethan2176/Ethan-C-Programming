// Write a C program to find the sum of the first n natural numbers.

# include <stdio.h>

int main() {
    int a , sum=0;
    printf("Enter a number :");
    scanf("%d" , &a);
    
    for (int p=1 ; p<=a ; p+=1){
        sum=sum+p;
        
    }
    printf("The sum is %d" , sum);
    
    return 0;
}