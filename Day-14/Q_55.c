//write a program to second largest element.
#include<stdio.h>
int main(){
    //Initialize a[100]i,j,n,temp.
    int a[100],i,j,n,temp;
    printf("Enter the number of element:");
    scanf("%d",&n);                                   //Take input in n.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                           //Entering the element of array.
    }
    for(i=0;i<n-1;i++){                             //Outer loop for running the value of array.
        for(j=0;j<n-1;j++){                         //Inner loop for runnng the index value of array so the value will not out of range.
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];                               //Swapping the values to sort the array.
                a[j+1]=temp;
            }
        }
    }
    printf("Second latgest element:%d",a[n-2]);
    return 0;   
}