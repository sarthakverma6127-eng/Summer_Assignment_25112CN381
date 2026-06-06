//Write a program to convert decimal number to binary number.
#include<stdio.h>
int main(){
    //Initialize decimal,n,binary array,i and j.
    int decimal,n,binary[100],i=0,j;
    //Take input in n.
    printf("Enter the decimal number:");
    scanf("%d",&n);

    decimal=n;            //To protect the original value assign the value of n to decimal.

    if(decimal==0){
        printf("Binary Equivalent.\n");
    }

    while(decimal!=0){
        binary[i]=decimal%2;             //Geting remainder of decimal,it would be 1 or 0.
        decimal/=2;                      //Removing the last value of decimal until it become zero.
        i++;
    }

    printf("===Binary number of %d===\n",n);

    for(j=i-1;j>=0;j--){
        printf("%d",binary[j]);            //Reverse print the remainder in the array.
    }
    
    return 0;


}