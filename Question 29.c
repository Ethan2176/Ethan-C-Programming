#include <stdio.h>

int main()
{
    int i;
    int size ,j ;
    printf("Enter the size of the array :");
    scanf("%d" , &size);
    
    int numbers[size] , frequency[size];
    
    for(i=0 ; i<size ; i++){
        int input;
        printf("Enter the number you want :");
        scanf("%d" , &numbers[i]);
         frequency[i]=-1;
    }
    
    for(i=0 ; i<size ; i++){
        int count=1;
        
        if (frequency[i]!=-1){
            continue;
        }
        
        for(j=i+1 ; j<size ; j++){
        if(numbers[j]==numbers[i]){
            count++;
            frequency[j]=0;
        }
        
        
    }
        frequency[i]=count;
}
for(int q=0 ; q<size ; q++){
    if(frequency[q]!=0){
        printf("The frequency of %d is %d\n" , numbers[q] , frequency[q]);
    }
    
}

return 0;
}
