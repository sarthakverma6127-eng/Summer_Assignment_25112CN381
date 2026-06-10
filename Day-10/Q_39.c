/*Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
int main(){
    //Initialize i,j,k and row.
    int i,j,k,row;
    //Take input in row.
    printf("Enter the hieght og the pyramid:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){                            //Outer loop for rows.
        for(j=1;j<=row-i;j++){                      //First inner loop for space.
            printf(" ");
        }
        for(k=1;k<=i;k++){                          //Second inner loop for print numbers in asecending order.
            printf("%d",k);
        }
        for(k=i-1;k>=1;k--){                        //Third inner loop for print numbers in descending order.
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}