//Write a program to create the voting eligibility system. 
#include<stdio.h>
int main(){
    //Initialize choice and age.
    int choice;
    int age;
    
    printf("==========================================\n");
    printf("               VOTING SYSTEM               \n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("For::Check eligibility::PRESS 1\n");
    printf("For::Exit the system::PRESS 2\n");
    scanf("%d",&choice);                                //Take input in choice.
    
    switch(choice){                                     //Use switch case for working of system.
        case 1:
            printf("Enter age: ");
            scanf("%d",&age);                           //Choice 1 run the eligibility system. 
            
            // 1. Check for unrealistic/invalid age first
            if(age < 0 || age > 150){
                printf("Invalid input: Enter a valid age.\n");
            } 
            // 2. Check if the user is eligible (18 or older)
            else if(age >= 18){
                printf("***ELIGIBLE FOR VOTING***\n");
            } 
            // 3. If they are younger than 18
            else {
                printf("Not ELIGIBLE. Try after %d years.\n", 18 - age);
            }
            break;
            
        case 2:
            printf("===EXITING THE SYSTEM====\n");
            printf("===THANK YOU===\n");
            break;
            
        default:
            printf("===INVALID CHOICE===\n");
            break;        
    }
    printf("=====================================================\n");
    return 0;
}