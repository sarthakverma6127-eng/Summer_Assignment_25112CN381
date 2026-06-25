//Write a program to Check string rotation.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize arrays for strings, temp buffer, and length variables.
    char str1[100], str2[100], temp[200];
    int len1, len2;
    
    //Take the input in str1 and str2.
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
                                //If lengths are not equal, they cannot be rotations of each other.
    if(len1 != len2){
        printf("%s is not a rotation of %s.", str2, str1);
    }
    else{
        strcpy(temp, str1);
        strcat(temp, str1);     //Concatenate str1 with itself to hold all possible rotations.
        
                                //Check if str2 is a substring of the concatenated temp string.
        if(strstr(temp, str2) != NULL){
            printf("%s is a rotation of %s.", str2, str1);
        }
        else{
            printf("%s is not a rotation of %s.", str2, str1);
        }
    }
    
    return 0;
    
}