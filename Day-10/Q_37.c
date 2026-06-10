/*Write a program to Print star pyramid.
    *
   ***
  *****
 *******
********* */

#include<stdio.h>
int main(){
    //Initialize i,j,k, and row.
    int i,j,k,row;

    printf("Enter the hieght of the pyramid:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){               //outer loop for rows.
        for(j=1;j<=row-i;j++){
            printf(" ");                  //First inner loop for spaces.
        }

        for(k=1;k<=(2*i-1);k++){
            printf("*");                   //Second inner loop for print *.
        }

        printf("\n");                     //Jump to the next line after first row.
    }


    return 0;
}