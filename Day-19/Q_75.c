//Write a progtam to transpose the matrix.
#include<stdio.h>
int main(){
    //Initialize a[][],i,j,n and m.
    int a[100][100],i,j,n,m;
    //Take input in n and m.
    printf("Enter row and column of matrics:");
    scanf("%d%d",&n,&m);
    //Entreing the element in matrics a.
    printf("===Matrics===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("===Matrics before transpose===\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){                                //Print the matrics before transpose.
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("===Matrics after transpose===\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[j][i]);                       //Print the matrics after transpose.
        }
        printf("\n");
    }
    return 0;
}