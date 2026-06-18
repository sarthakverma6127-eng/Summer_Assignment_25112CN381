//Write a program to Sort array in descending order.
#include<stdio.h>
int main(){
    //Initialize i,n,j,temp,a[100].
    int i,n,j,temp,a[100];
    //Take input in n.
    printf("Enter the number of elements:");
    scanf("%d",&n);
    //Entering the element in array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Using bubble sort sorting the array.
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){                    //Sort the array th decreasing order.
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("===Array after sorting in descending order===\n");
    for(i=0;i<n;i++){                      //Print the array after sorting. 
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}