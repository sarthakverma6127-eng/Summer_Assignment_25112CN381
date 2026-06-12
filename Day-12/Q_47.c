//Write a program to Write function for Fibonacci.

#include<stdio.h>
//Initialize the void function.
void fibonacci(int n){
    int first=0,second=1,next;

    printf("---Fibonacci series---\n");

    for(int i=1;i<=n;i++){
        printf("%d",first);               //Print the fibonacci series.
        next=first+second;
        first=second;
        second=next;
    }
    printf("\n");
}

int main(){
    int a;

    printf("Enter the number:");
    if(scanf("%d",&a)!=1||a<=0){
        printf("Inivlid input:Enter the positive integer.");
    }

    fibonacci(a);                          //Function calling.

    return 0;
}