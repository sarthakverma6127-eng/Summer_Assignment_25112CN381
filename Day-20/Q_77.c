//Write a program to multiply matrics.
#include<stdio.h>
int main(){
    //initalize a[][],b[][],c[][],i,j,r1,c1,r2 and c2.
    int a[100][100],b[100][100],c[100][100],i,j,r1,c1,r2,c2;
    //Take a input in r1 and c1.
    printf("Enter number of rows and columns of matrics A:");
    scanf("%d%d",&r1,&c1);
    printf("===Matrics A===\n");
    //Entering the element of matrics A.
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Take input in r2 and c2.
    printf("Enter number of rows and columns of matrics B:");
    scanf("%d%d",&r2,&c2);
    printf("===Matrics B===\n");
    //Entering the element in matrics B.
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter B[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Checking the condition of matrics multiplication.
    if(r1!=c2||c1!=r2){
        printf("Invalid input:Enter the correct row and column according to the condition of multiplication in matrics.");
    }
    else{
        printf("===Multpliacated matrics===\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;                               //Insure that matrics will start from 0.
                for( int k=0;k<c1;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];           //Condition for matrics multiplication
                }                
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}