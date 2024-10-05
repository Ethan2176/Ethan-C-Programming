// Write a C program to print all prime numbers between 1 and 100.
# include <stdio.h>
# include <math.h>
int main() {
    int i =2;
    
    while (i<=100){
        int j=2;
        int primekya=1;
        
        while(j<=sqrt(i)){
            if (i%j==0){
                primekya=0;
                
                break;
            }
            j++;
        }
    if (primekya==1){
        printf(" %d is a prime number.\n" , i);
       
    }    
    i++;
        }
    
    return 0;
}