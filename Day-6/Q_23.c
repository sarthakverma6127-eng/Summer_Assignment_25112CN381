//Write a program to Count set bits in a number.
#include<stdio.h>
int main(){
    //Initialize n,sum,r and n1.
    int n,sum=0,r,n1;
    //Take the input in n.
    printf("Enter the number:");
    scanf("%d",&n);
    
    n1=n;                       //To save the original value of n from modification.

    while(n1!=0){
        r=n1%2;                 //Get the remainder to check the last binary digit.
        if(r==1){
            sum+=1;             //Sum storing the count of total set bits found.
        }
        n1/=2;                  //Reduce the number by dividing it by 2.       
    }

    //Displaying the final result.
    printf("Total set bits in %d is %d.",n,sum);
    
    return 0;
}