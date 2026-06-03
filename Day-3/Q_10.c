//Write a program to print prime number in a range.
#include<stdio.h>
int main(){
    //Initialize i,j,n and prime.
    int i,j,n,prime;
    //Take input in n.
    printf("Enter the number:");
    scanf("%d",&n);
    printf("===Prime number in between 1 to %d===\n",n);
    for(i=2;i<=n;i++){         //Using outer loop for running the value from 2 to n.
        prime=1;               //Assuming the value of prime be 1.
        for(j=2;j*j<=i;j++){   //The inner loop will check every value is prime or not.
            if(i%j==0){
                prime=0;
            }
        }
        if(prime==1){            //Those values which do not chnange the prime value will be prime number and print those number.
            printf("%d\n",i);
        }
        
        
    }
   
    return 0;
}