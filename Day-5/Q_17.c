//Write a program to check perfect number.
#include<stdio.h>
int main(){
    //Initialize n,i and sum.
    int n,i,sum=0;
    //Take input in n.
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++){
        if(n%i==0){            
            sum+=i;               //Storing the sum of factor in sum.
        }
    }

    if(sum==n && n>0){
        printf("%d is a Perfect number.",n);
    }
    else{
        printf("%d is not a Perfect number.",n);
    }

    return 0;
}