//Write a program to recursive fibonacci.
#include<stdio.h>
//Initialize recursive function fibonacci.
int fibonacci(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);     //Fibonacci term.
}

int main(){                                  //Main function or calling function
    int x;
    int res;

    printf("Enter the number:");
    scanf("%d",&x);
    
    res=fibonacci(x);

    if(x<0){
        printf("Invalid input:Enter positive integer.");
    }
    else{
        printf("Fibonacci at %d postion is %d",x,res);                   //Print the fibonacci term at respective postion.
    }

    return 0;
}