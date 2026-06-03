//Write a program to Find LCM of two numbers.
#include<stdio.h>
int main(){
    //Initialize a,b,x,y,temp and lcm.
    int a,b,x,y,temp,lcm;
    //Take input in a and b.
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    /*To find the LCM firstly be have to find the GCD.
    The relation between LCM and GCD is
    LCM(a,b)=a*b/GCD(a,b)*/
    x=a;                              //Assign a value to x and b value to y to save the original value from modification.
    y=b;
    while(y!=0){
        temp=y;
        y=x%y;              //Finding the GCD.
        x=temp;
    }
    lcm=a*b/x;            //Using the realtion between LCM and GCD.
    printf("LCM=%d",lcm);
}