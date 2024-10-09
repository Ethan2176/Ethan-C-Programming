//Second Largest Element in array
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    int numbers[size];
    for (int i=0; i<size ; i++){
        int inp;
        printf("Enter the number you want :");
        scanf("%d" , &numbers[i]);
        }
        
        /*for (int q=0 ; q<size ; q++){
            printf("%d\n" ,numbers[q]);
    }*/
    
    int max=numbers[0];
    
    for(int q=0 ; q<size ; q++){
        if(numbers[q]>max){
            max=numbers[q];
            continue;
        }
       else{
            continue;
       }
        }
    printf("%d" , max);
    
    int SL=numbers[0];
    
    for (int d=0;d<size;d++){
        if(numbers[d]>=SL && numbers[d]<max){
            SL=numbers[d];
        }
        else{
            continue;
        }
    }
    printf("\n%d" , SL);
    
    return 0;
}