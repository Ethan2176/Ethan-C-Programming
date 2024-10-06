# include <stdio.h>

int main(){
    int a,b,gcd;
    printf("Enter two numbers of your choice :");
    scanf("%d %d" , &a ,&b);
    
    if(a==0 && b==0){
        printf("The gcd of 0 and any other number is 0.\n");
    }
    
    else{
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            
            else{
                b=b-a;
            }
        }
      gcd=a;
      printf("The gcd is %d" , a);
    }
    
    return 0;
}