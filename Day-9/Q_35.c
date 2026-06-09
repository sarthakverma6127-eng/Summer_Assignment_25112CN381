//Write a program to Print repeated character pattern.
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
        for(j=1;j<=i;j++){
            printf("%c",i+64);  //Printing character by converting row number to ASCII ('A' is 65) to repeat it.
        }
        printf("\n");           //Move to the next line after completing a row.
    }

    return 0;
    
}