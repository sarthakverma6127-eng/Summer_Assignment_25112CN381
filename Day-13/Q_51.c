//Write a program to find the largest and smallest elment.

#include<stdio.h>
int main(){
    //Initialize an array of size 100 element a[100],i,n,min and max.
    int a[100],i,n,min,max;

    printf("Enter the number of element:");   //Take input in n.
    scanf("%d",&n);
    
    printf("Enter a[0]:");                    //Take input the first element of array.
    scanf("%d",&a[0]);

    min=a[0];                            
    max=a[0];
    
    for(i=1;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                             //Enter the element of the array.
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }

    printf("Largest element in array:%d\n",max);       //Print the maximum value.
    printf("Smallest element in array:%d",min);        //Print the minimum value.

    return 0;
}  