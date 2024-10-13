// Write a C program to merge two arrays.
#include <stdio.h>

int main() 
{
    int size1;
    printf("Enter the size of the first array :");
    scanf("%d" , &size1);
    
    int size2;
    printf("Enter the size of the second array :");
    scanf("%d" , &size2);
    
    int Ethan1[size1];
    int Ethan2[size2];
    int size3=size1+size2;
    int Merged[size1+size2];
    
    for(int i=0 ; i<size1 ; i++)
    {
        int input;
        printf("Enter a number of your choice for first array :");
        scanf("%d" , &Ethan1[i]);
    }
    
    for(int i=0 ; i<size2 ; i++)
    {
        int input;
        printf("Enter a number of your choice for second array :");
        scanf("%d" , &Ethan2[i]);
    }
    
    for (int p=0; p<size1 ; p++)
    {
        Merged[p]=Ethan1[p];
    }
    
     for (int p=0; p<size2 ; p++)
    {
        Merged[size1+p]=Ethan2[p];
    }
    
    printf("The elements of the merged array are :\n");
    for(int i=0 ; i<size3 ; i++){
        printf("%d\n" , Merged[i]);
    }
    
    
    
    
    
    
    return 0;
}

    
