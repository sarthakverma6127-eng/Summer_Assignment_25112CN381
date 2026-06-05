//Write a program to find the largest prime factor.
#include<stdio.h> 
int main(){
    //Initialize i,n,j and prime.
    int i,n,j,prime;
    //Take input in n.
    printf("Enter the number:");
    scanf("%d",&n);

    printf("===Largest Prime Factor of %d===\n",n);

    for(i=n;i>=2;i--){                  //Running loop reverse so the last value will be the largest.
        if(n%i==0){
            prime=1;                    //Checking the value of i will be prime or not.
            for(j=2;j*j<=n;j++){
                if(i%j==0){
                    prime=0;            //Checking the value if i is not prime.
                    break;              //If not prime the loop will break.
                }
            }
        }
        if(prime==1){
            printf("%d",i);             //If the prime value 1 at the value of i will be print.
            break;
        }
    }
}