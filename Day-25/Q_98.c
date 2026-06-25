//Write a program to Find common characters in strings.
#include<stdio.h>
#include<string.h>
int main(){
    //Initialize arrays for strings, count tracking, and length variables.
    char str1[100], str2[100];
    int count1[26]={0}, count2[26]={0};
    int i, len1, len2;
    
    //Take the input in str1 and str2.
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
                                //Count frequencies of each character in the first string.
    for(i=0; i<len1; i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            count1[str1[i] - 'a']++;
        }
    }
    
                                //Count frequencies of each character in the second string.
    for(i=0; i<len2; i++){
        if(str2[i] >= 'a' && str2[i] <= 'z'){
            count2[str2[i] - 'a']++;
        }
    }
    
    printf("Common characters: ");
                                //Compare frequencies to find and print intersection characters.
    for(i=0; i<26; i++){
        if(count1[i] > 0 && count2[i] > 0){
            printf("%c ", i + 'a');
        }
    }
    printf("\n");
    
    return 0;
    
}