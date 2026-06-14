//Write the program to find sum and average of array.

#include<stdio.h>
int main(){
    //Initialize array a[]of size 100,i,n,sum and avg(average).
    int a[100],i,n,sum,avg;

    printf("Enter the number of element:");
    scanf("%d",&n);                                     //Take input in n.

    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                                //Enter the element of array.
        sum=sum+a[i];                                     //Sum the element of array.
        avg=sum/n;                                        //Find the average of array element.
    }

    printf("Sum of the array element:%d\n",sum);
    printf("Average of the array element:%d",avg);

    return 0;
}