// Write a C program to check if a year is a leap year or not.

# include <stdio.h> 
int main() {
    int year;
    printf("Enter year :");
    scanf("%d" , &year);
    
    if (year%4==0) {
        printf("Its a leap year");
    }
    else{
        printf("Its not a leap year");
    }
    return 0;
    
}