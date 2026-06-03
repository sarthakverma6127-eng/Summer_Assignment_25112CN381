//Write a program to Find GCD of two numbers.
#include<stdio.h>
int main(){
    //Initialize a,b and temp.
    int a,b,temp;
    //Take the input in a and b.
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    //Using Euclidean algorithm method.
    while(b!=0){            //The loop will run until the value of b become zero.
        temp=b;             //Store the current value of b in temp. 
        b=a%b;              //Find the remainder when a is divided by b.Store the remainder in b.
        a=temp;             //Assign the old value of b (stored in temp) to a.
    }
    printf("GCD=%d",a);
    return 0;
}