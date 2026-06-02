//Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main(){
    //Initalize n,n1,remainder(rem) and reverse(rev).
    int n,n1,rem,rev=0;
    //Take the input in n.
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;     //This step will use for not changing the original value of n.
    while(n1!=0){
        rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    //Palindrome numbers are the numbers which will equal to the reverse of its own.
    if(rev==n){
        printf("%d is Palindrome.",n);   //Checking the reverse is equal to the entered number.
    }
    else{
        printf("%d is not Palindrome.",n);
    }

    return 0;

}