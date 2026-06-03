//Write a program check whether the number is prime.
#include<stdio.h>
int main(){
    int i,n,prime=1;  //Initialize i,n and prime which have value 1.
    printf("Enter the number:");  //Take input in n by user.
    scanf("%d",&n);
    
    //On 0,1 and negative values are not prime.

    if(n<=1){
        prime=0;
    }
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;      //If the factor is found then the value of prime will update to zero.
                break;        //And the loop will end there.
            }
        }
    }

    //If the value of prime will remain same then the entered number is prime.
    
    if(prime==1){
        printf("%d is a prime.",n);
    }
    else{
        printf("%d is not a prime.",n);
    }
    return 0;
}