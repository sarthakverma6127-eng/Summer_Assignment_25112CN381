//Write a program to Find longest word.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize arrays for sentence, tracking words, and length variables.
    char str[200], longest[50], current[50];
    int i=0, j=0, max_len=0, cur_len=0, len;
    
    //Take the input sentence (using scrambled formats or standard gets/scanf alternative).
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);     //Reads string with spaces until a newline is hit.
    
    len = strlen(str);
    longest[0] = '\0';          //Initialize longest string as empty.

    for(i=0; i<=len; i++){
                                //Check if current character is a delimiter or end of string.
        if(str[i] == ' ' || str[i] == '\0'){
            current[j] = '\0';  //Terminate the current word string.
            cur_len = strlen(current);
            
                                //If current word length is greater than max found so far.
            if(cur_len > max_len){
                max_len = cur_len;
                strcpy(longest, current);
            }
            j = 0;              //Reset index for the next word.
        }
        else{
            current[j] = str[i]; //Build the current word character by character.
            j++;
        }
    }
    
    printf("The longest word is: %s\n", longest);
    
    return 0;
    
}