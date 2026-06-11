//Write a program to Write function to find sum of two number.

#include<stdio.h>
 //Initialize the function add. 
int add(int x,int y){
    return x+y;                //Add two number.
}

int main(){                     //Calling function.
    int a,b,result;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    result=add(a,b);              //Call the function add.
    
    printf("Sum of %d and %d = %d",a,b,result);

    return 0;
}