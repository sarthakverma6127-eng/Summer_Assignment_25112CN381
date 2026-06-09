//Write a program to Print reverse number triangle.
#include<stdio.h>
int main(){
    //Initialize i,j and rows.
    int i,j,rows;
    //Take the input in rows.
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    
                                //No need to save original value as rows is not modified.

    for(i=rows;i>=1;i--){
                                //For every row, reset the inner column loop.
        for(j=1;j<=i;j++){
            printf("%d",j);     //Printing the current column number to form the inverted triangle.
        }
        printf("\n");           //Move to the next line after completing a row.
    }

    return 0;
    
}