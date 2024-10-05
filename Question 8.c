// Write a C program to find the maximum of two numbers

# include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers of your choice :");
    scanf("%d %d" , &a,&b);
    
    if (a>b) {
        printf("The first number %d is greater than the second number %d" , a,b);
    }
        
    else if (b>a) {
        printf("The second number %d is greater than the first number %d" , b,a);
    }
    
    else {
        printf("Both the numbers are equal");
    }
    return 0;
}