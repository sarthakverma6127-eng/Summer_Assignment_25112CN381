//Write a program to find daigonal sum.
#include<stdio.h>
int main(){
    //Initialize a[][],i,j,n and sum. 
    int a[100][100],i,j,n,sum=0;
    //Take input in n.
    printf("Enter the row of square matrics:");
    scanf("%d",&n);
    //Entering the element in matrics.
    printf("===Matrics===\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Sum the diagonal element.
    for(i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    printf("Sum of diagonal element of matrics:%d",sum);                //Print the sum of diagonal.
    return 0;
}