//Write a program to Print hollow square pattern.
#include<stdio.h>
int main(){
    //Initialize i,j and rows.
    int i,j,rows;
    //Take the input in rows.
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    
                                //No need to save original value as rows is not modified.

    for(i=1;i<=rows;i++){
                                //For every row, reset the inner column loop.
        for(j=1;j<=rows;j++){
                                //Print stars only for the boundaries of the square.
            if(i==1 || i==rows || j==1 || j==rows){
                printf("*");
            }
            else{
                printf(" ");    //Print space for the hollow internal section.
            }
        }
        printf("\n");           //Move to the next line after completing a row.
    }

    return 0;
    
}