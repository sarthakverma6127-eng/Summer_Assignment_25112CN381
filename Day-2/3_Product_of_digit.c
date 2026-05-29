#include<stdio.h>
int main(){
    int n,pro,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=10){
        rem=n%10;
        pro=pro*rem;
        n/=10;
    }
    printf("Product of digit:%d",pro);
    return 0;
}