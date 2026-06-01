//Write a program to Count digits in a number.
#include<stdio.h>
int main(){
    //Initialize i,n,r,n1 and count.
    int count=0;
    //Using "long long" data type beacuse to input the long numbers to count the digits.
    long long n,r;
    long long n1;
    //Take the input in n;
    printf("Enter the Number:");
    scanf("%lld",&n);
    n1=n;
    //"do while" loop use beacuse it will read zero as a input and count zero also.
    do{
        count++;
        n1/=10;
    }while(n1!=0);

    printf("Number of digit in %lld will be %d.",n,count);

    return 0;
}