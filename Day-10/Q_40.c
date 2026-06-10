/*Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/ 

#include<stdio.h>
int main(){
     //Initialize i,j,k and row.
    int i,j,k,row;
    //Take input in row.
    printf("Enter the hieght of the pyramid:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){                                         //Outer loop for rows.
        for(j=1;j<=row-i;j++){                                   //First inner loop for spaces.
            printf(" ");
        }
        for(k=1;k<=i;k++){                                       //Second inner loop for print alphabet in ascending order.
            printf("%c",'A'+k-1);
        }
        for(k=i-1;k>=1;k--){                                     //Third inner loop for print alphabet in descending order.
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }
    return 0;
}