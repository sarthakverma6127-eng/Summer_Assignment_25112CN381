//Write a program to add two matrics.
#include<stdio.h>
int main(){
    //Initialize a[][],b[][],c[][],i,j,m,n.
    int a[100][100],b[100][100],c[100][100],i,j,n,m;
    //Take input in n and m.
    printf("Enter row and column of matrics A and B:");
    scanf("%d%d",&n,&m);
    printf("===Matrics A===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){                                               //Entering the elmenet of matrics A.
            printf("Enter A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("===Matrics B===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter B[%d][%d]:",i,j);                              //Entering the element of matrics B.
            scanf("%d",&b[i][j]);
        }
    }
    printf("===Addition of A and B matrics===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];                                    //Adding the element of matrics A and B.
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;    
}