//Write a program to Compress a string.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize arrays for string, lengths, loop counter, and count tracking.
    char str[100];
    int i, len, count;
    
    //Take the input in str.
    printf("Enter the string to compress: ");
    scanf("%s", str);
    
    len = strlen(str);
    printf("Compressed string: ");

    for(i=0; i<len; i++){
        count = 1;              //For every new character, reset the repetition count.
        
                                //Count consecutive occurrences of the current character.
        while(i < len - 1 && str[i] == str[i+1]){
            count++;
            i++;
        }
        
        printf("%c%d", str[i], count); //Print the character followed by its total sequence count.
    }
    printf("\n");
    
    return 0;
    
}