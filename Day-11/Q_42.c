//Write a program to Write function to find maximum.

#include<stdio.h>
//Initialize the void function maximum.
void maximum(int x,int y){
    if(x>y){ 
        printf("%d is maximum.",x);                 //Check the two number if x is greater then print x otherwise y.
    }
    else{
        printf("%d is maximum.",y);
    }
}

int main(){                             //Calling fuction
    int a,b,result;

    printf("Enter the two number:");
    scanf("%d%d",&a,&b);

    maximum(a,b);                    //Function calling.

    return 0;
}