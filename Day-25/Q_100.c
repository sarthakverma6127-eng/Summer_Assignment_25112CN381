//Write a program to Sort words by length.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize a 2D array for words, a temp buffer, and loop/size variables.
    char words[20][30], temp[30];
    int i, j, n;
    
    //Take the input for total number of words.
    printf("Enter the number of words: ");
    scanf("%d", &n);
    
    //Take the input of all words.
    printf("Enter %d words:\n", n);
    for(i=0; i<n; i++){
        scanf("%s", words[i]);
    }
    
                                //Use standard Bubble Sort logic to arrange words by length.
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
                                //Compare lengths of consecutive words.
            if(strlen(words[j]) > strlen(words[j+1])){
                                //Swap the positions if the current word is longer than the next.
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
    
    printf("\nWords sorted by length:\n");
    for(i=0; i<n; i++){
        printf("%s\n", words[i]);
    }
    
    return 0;
    
}