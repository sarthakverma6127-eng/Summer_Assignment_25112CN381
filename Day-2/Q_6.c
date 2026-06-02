//Write a program to Reverse a number.
#include<stdio.h>
int main(){
    //Initialize n,remainder(rem) and reverse(rev).
    int n,rem,rev=0;
    //Take input in the n.
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;   //This step will store the value of reverse in it.
        n=n/10;
    }
    printf("Reverse of a given number will be %d.",rev);
    
    return 0;
}