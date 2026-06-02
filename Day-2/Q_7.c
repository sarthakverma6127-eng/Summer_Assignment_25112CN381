//Write a program to Find product of digits.
#include<stdio.h>
int main(){
    //Initialize n,remainder(rem) and product(pro).
    int n,rem,pro=1;
    //Take input in n.
    printf("Enter the numner:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        pro=pro*rem;  //This step will store the value of product of digtit come from the remainder.
        n=n/10;
    }
    printf("Product of the given digit will be %d",pro);
    
    return 0;
}