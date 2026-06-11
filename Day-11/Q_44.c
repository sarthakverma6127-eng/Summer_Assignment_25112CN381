//Write a program to Write function to find factorial.

#include<stdio.h>
//Initialize the integer function factorial.
int factorial(int n){
    
    if(n<0){
        return -1;
    }

    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;                        //Storing factorial in the fact.
    }

    return fact;                       //Return the value of fact.

}

int main(){                             //Calling function.
    int a,result;

    printf("Enter the number:");
    scanf("%d",&a);

    result=factorial(a);                 //Function calling.

    if(result==-1){
        printf("Invalid input:Enter positive integer.");
    }
    else{
        printf("Factorial of %d is %d",a,result);
    }

    return 0;
}