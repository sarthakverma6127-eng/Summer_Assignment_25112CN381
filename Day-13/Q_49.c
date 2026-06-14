//write a program to input and display array.

#include<stdio.h>
int main(){
    //Initialize array a[] of size 100,i and n. 
    int a[100],i,n;

    printf("Enter the number of element:");                        //Take input in n.
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);       
        scanf("%d",&a[i]);                                         //Enter the array element.
    }

    printf("---Array---\n");

    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);                              //Display the ouput on the screen.
    }

    return 0;
}