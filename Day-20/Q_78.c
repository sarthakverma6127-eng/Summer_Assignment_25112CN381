//Write a program to check symmetric matrics.
#include<stdio.h>
int main(){
    //Initialize a[][],i,j,n,count.
    int a[100][100],i,j,n,count=0;
    //Take input in n.
    printf("Enter number rows of square matrics:");
    scanf("%d",&n);
    printf("===Matrics===\n");
    //Entering the element in matrics.
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Checking for symmetric matrics.
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){           //Check the transpose element is equal or not to the actual matrics element. 
                count=1;                    //Mismatach found.
                break;
            
            }
        }
        if(count==1){
            break;                      //Break the outerloop.
        }
    }
    if(count==0){
        printf("Enetered matrics is symmetric matrics.");
    }
    else{
        printf("Enetered matrics is not symmettric matrics.");
    }
    return 0;
}