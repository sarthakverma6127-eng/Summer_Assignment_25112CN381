//Write a program to print the multiplication table of given number.
#include<stdio.h>
int main(){
    //Initialize n and i.
    int n,i;
    //Take the input in n.
    printf("Enter the number:");
    scanf("%d",&n);
    printf("---Multiplication table of %d---",n);
    printf("\n");
    for(i=1;i<=10;i++){
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}