// Write a C program to find the greatest of three numbers

# include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers of your choice :");
    scanf("%d %d %d" , &a,&b,&c);
    
    if (a>b && a>c && b==c) {
        printf("The first number is the greatest and the other two are equal");
    }
    
    else if (a>b && a>c && b!=c) {
        printf("The first number is the greatest and the other two numbers are not equal");
    }
    
    else if (b>a && b>c && a==c){
        printf("The second number is the greatest and the other two are equal");
    }
    
    else if (b>a && b>c && a!=c){
        printf("The second number is the greatest and the other two are not equal");
    }
    
    else if (c>a && c>b && a==b){
        printf("The third number is the greatest and the other two are equal");
    }
    
    else if (c>a && c>b && a!=b){
        printf("The third number is the greatest and the other two are not equal");
    }
        
    else if (a==b==c){
        printf("All numbers are equal");
    }
    return 0;
}