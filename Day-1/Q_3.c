//Write a program to find the factorial of a given nummber.
#include<stdio.h>
int main(){
    //Initialize i,n and fact.
    int i,n;
    long long fact=1;//Using long long data type to increase the ouput limit after 12.
    //Take the input in n.
    printf("Enter the Integer number:");
    scanf("%d",&n);
    //Using the for loop to do factorial the given number.
    for(i=1;i<=n;i++){
        fact=fact*i;
    }

    printf("Factiroal of %d will be %lld.",n,fact);

    return 0;
}