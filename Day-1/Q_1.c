//Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
    //Initialize i,n and sum.

    int i,n,sum;
    
    //Take input the value of n
    
    printf("Enter the natural number:");
    scanf("%d",&n);

    //Run the loop for calculate the sum.

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    
    printf("Sum of first n number will be %d.",sum);

    return 0;
    
}