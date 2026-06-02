//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main(){
    //Initialize n,remainder(rem) and sum. 
    int n,rem,sum=0;
    //Take input in the n.
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;    //This is used for removing the last digit from the given number.
    }
    printf("Sum of digit will be %d.",sum);
    return 0;
}