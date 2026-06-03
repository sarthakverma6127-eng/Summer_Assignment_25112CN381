//Write a program to Find LCM of two numbers.
#include<stdio.h>
int main(){
    int a,b,x,y,temp,lcm;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    lcm=a*b/x;
    printf("LCM=%d",lcm);
}