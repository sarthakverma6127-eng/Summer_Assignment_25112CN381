#include<stdio.h>
int main(){
    int n,rem,rev,n1;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=10){
        rem=n1%10;
        rev=rev*10+rem;
        n1/=10;
    }
    if(rev==n){
        printf("%d is Palindrome.",n);
    }
    else{
        printf("%d is not Palindrome.",n);
    }
    return 0;
}