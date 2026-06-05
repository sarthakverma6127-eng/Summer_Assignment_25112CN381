//Write a program to print the factor of a number.
#include<stdio.h>
int main(){
    //Initialize i and n.
    int i,n;
    //Take input in n.
    printf("Enter the number:");
    scanf("%d",&n);

    printf("---Factor of %d---\n",n);
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);        //Print the factor of n when the remainder is zero.
        }
    }

    return 0;
}