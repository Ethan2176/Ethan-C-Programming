// Write a C program to display the multiplication table of a given number.

# include <stdio.h>

int main() {
    int a ,p=1 , table;
    printf("Enter a number :");
    scanf("%d" , &a);
    
    for (p=1 ; p<=10 ; p+=1){
         table=a*p;
        printf("The multiplicaion table is \n %d*%d=%d\n" ,a , p,table );
    } 
       
       
return 0;
    
    
    
}