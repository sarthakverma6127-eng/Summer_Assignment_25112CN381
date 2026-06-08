//Write a program to recursive sum of digit.
#include<stdio.h>
//Initialize recursive funtion sumdigit.
int sumdigit(int n){
    // Base case: If the number becomes 0, stop and return 0
    if(n==0){
        return 0;
    }
    // Grab the last digit (n % 10) and add it to the sum of the remaining digits (n / 10)
    return (n%10)+sumdigit(n/10);
    
}

int main(){
    int x;
    int res;
    printf("Enter the number:");
    scanf("%d",&x);
    res=sumdigit(x);
    if(x<0){
        printf("Invlaid input:Enter the positive integer.");
    }
    else{
        printf("Sum of digit of %d is %d",x,res);
    }

    return 0;
}