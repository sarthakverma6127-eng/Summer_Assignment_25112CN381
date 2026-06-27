//Write a program to create number guessing game.
#include<stdio.h>
#include<stdlib.h>                 
#include<time.h>
int main(){
    //Initialize the secret number,guess and attempt.
    int secret_num,guess,attempt=0;
    srand(time(0));                //Choose the random number.
    secret_num=(rand()%100)+1;     //Generate the number between 1 to 100.
    printf("===WELCOME TO THE GAME OF NUMBER GUESSING===\n");
    printf("---I HAVE CHOOSEN ONE NUMBER BETWEEN 1 TO 100---\n");
    printf("===Can you guess the number i chosen===\n");
    do{
        printf("Enter the guess number:");
        scanf("%d",&guess);                     //Enter the guessed number. 
        attempt++;                              //Upadate the attempt.
        if(guess>secret_num){
            printf("===TO HIGH!TRY AGAIN===\n");
        }
        else if(guess<secret_num){
            printf("===TO LOW!TRY AGAIN===\n");
        }
        else{
            printf("===Congratulation===\n");
            printf("===You guessed in right===\n");             //Number match and print congratulation.
            printf("Attempts you take:%d",attempt);
        }
    }
    while(guess!=secret_num);                     //Repeat and stop
    return 0;
}