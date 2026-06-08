//Write the program to recursive factorial.
#include<stdio.h>
//Initialize the recursive function factorial
int factorial(int n){

    if(n==0||n==1){             //Base code.
        return 1;
    }

    return n*factorial(n-1);  //Recursive case.
}

int main(){                   //Calling function.
    int x;
    int res;

    printf("Enter the number:");
    scanf("%d",&x);

    if(x<0){
        printf("Invalid value:Enter the positive integer.");
    }

    else{
        res=factorial(x);
        printf("Factorial:%d",res);                //Print the factorial of entered positive integer.

    }

    return 0;
}