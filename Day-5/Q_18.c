//Write a program to check strong number.
#include<stdio.h>
int main(){
    //Initialize i,n,sum,fact,r and n1.
    int i,n,sum=0,fact,r,n1;
    //Take the input in n.
    printf("Enter the number:");
    scanf("%d",&n);
    
    n1=n;                       //To save the original value of n from modification.

    while(n1!=0){
        r=n1%10;
        fact=1;                 //For every digit fact value reset.
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum+=fact;              //Sum storing the value of digit of factorial and sum them.
        n1/=10;        
    }

    if(sum==n){
        printf("%d is a Strong number.",n);
    }
    else{
        printf("%d is not a Strong number.",n);
    }
    return 0;
    
}