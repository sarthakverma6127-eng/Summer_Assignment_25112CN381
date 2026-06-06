//Write a program to Find x^n without pow().
#include<stdio.h>
int main(){
    //Initialize i,x,n,prod and n1.
    int i,x,n,prod=1,n1;
    //Take the input in x and n.
    printf("Enter the base value (x):");
    scanf("%d",&x);
    printf("Enter the power value (n):");
    scanf("%d",&n);
    
    n1=n;                       //To save the original value of n from modification.

    for(i=1;i<=n1;i++){
        prod=prod*x;            //Prod storing the multiplied value of x by itself.
    }

    //Displaying the final result.
    printf("%d to the power of %d is %d.",x,n,prod);
    
    return 0;
}