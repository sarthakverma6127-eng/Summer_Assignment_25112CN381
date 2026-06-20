//Write a program to find row wise sum.
#include<stdio.h>
int main(){
    //Initailize a[][],i,j,n,m,sum.
    int a[100][100],i,j,n,m,sum;
    //Take input in n and m.
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&n,&m);
    //Enetering the element of matrics. 
    printf("===Matrics===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=0;                         //Reset the value of sum.
        for(j=0;j<m;j++){
            if(j<m){                     //Sum until row is finished.
                sum=sum+a[i][j];
            }
        }
        printf("Row %d sum:%d\n",i+1,sum);       //Print the sum of row.
    }
        
    return 0;
}