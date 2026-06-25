//Write a program to Sort names alphabetically.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize a 2D array for names, a temp buffer, and loop/size variables.
    char names[20][30], temp[30];
    int i, j, n;
    
    //Take the input for total number of names.
    printf("Enter the number of names: ");
    scanf("%d", &n);
    
    //Take the input of all names.
    printf("Enter %d names:\n", n);
    for(i=0; i<n; i++){
        scanf("%s", names[i]);
    }
    
                                //Use standard Bubble Sort logic to arrange names.
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
                                //Compare consecutive names alphabetically.
            if(strcmp(names[j], names[j+1]) > 0){
                                //Swap the positions if they are out of order.
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    
    printf("\nNames in alphabetical order:\n");
    for(i=0; i<n; i++){
        printf("%s\n", names[i]);
    }
    
    return 0;
    
}