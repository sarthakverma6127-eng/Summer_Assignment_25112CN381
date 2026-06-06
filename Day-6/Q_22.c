//Write a program to convert binary to decimal number.
#include<stdio.h>
int main(){
    //Initialize i,n,sum,p,r and n1.
    int i,n,sum=0,p,r,n1;
    //Take the input in n.
    printf("Enter the binary number:");
    scanf("%d",&n);
    
    n1=n;                       //To save the original value of n from modification.
    i=0;                        //To track the position/power of 2.

    while(n1!=0){
        r=n1%10;
        p=1;                    //For every position power value reset.
        for(int j=1;j<=i;j++){
            p=p*2;
        }
        sum+=r*p;               //Sum storing the value of binary digit multiplied by its power.
        i++;                    //Increment the power for the next position.
        n1/=10;        
    }

    //Displaying the final result.
    printf("Decimal number of %d is %d.",n,sum);
    
    return 0;
}