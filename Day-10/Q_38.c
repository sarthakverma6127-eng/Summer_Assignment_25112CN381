/*Write a program to Print reverse pyramid.
*********
 *******
  *****
   ***
    *  */

    #include<stdio.h>
    int main(){
        //Initialize i,j,k and row. 
        int i,j,k,row;
        //Take input in row.   
        printf("Enter the hieght of the pyramid:");
        scanf("%d",&row);

        for(i=row;i>=1;i--){                         //outer loop for rows in reverse.
            for(j=0;j<(row-i);j++){                  //first inner loop for spaces.
                printf(" ");
            }
            for(k=1;k<=(2*i-1);k++){                 //second inner loop for print *. 
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }