#include<stdio.h>
int main(){
    int n,count=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        count++;
        n/=10;
    }
    printf("Number of digit:%d",count);
    return 0;
}