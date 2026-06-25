//Write a program to Remove duplicate characters.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize array for string, tracking variables, and lengths.
    char str[100];
    int i, j, k, len;
    
    //Take the input in str.
    printf("Enter the string: ");
    scanf("%s", str);
    
    len = strlen(str);

    for(i=0; i<len; i++){
                                //Check all subsequent characters for duplicates.
        for(j=i+1; j<len; j++){
            if(str[i] == str[j]){
                                //Shift all remaining characters left to overwrite the duplicate.
                for(k=j; k<len; k++){
                    str[k] = str[k+1];
                }
                len--;          //Decrease length as a character is removed.
                j--;            //Adjust index to recheck the current position.
            }
        }
    }
    
    printf("String after removing duplicates: %s\n", str);
    
    return 0;
    
}