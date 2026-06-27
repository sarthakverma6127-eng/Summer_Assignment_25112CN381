//Write a program to create quiz application.
#include <stdio.h>
#include <ctype.h>

// Define a structure to hold quiz question data
typedef struct {
    char question[200];
    char options[4][50];
    char correct_option;
} QuizQuestion;

int main() {
    // Initialize an array of questions
    QuizQuestion quiz[3] = {
        {
            "Which data type is used to store a single character in C?",
            {"A. int", "B. float", "C. char", "D. double"},
            'C'
        },
        {
            "What is the correct extension of a C source file?",
            {"A. .c", "B. .cpp", "C. .class", "D. .h"},
            'A'
        },
        {
            "Which function is used to print output to the console in C?",
            {"A. scanf()", "B. printf()", "C. print()", "D. echo()"},
            'B'
        }
    };

    int total_questions = 3;
    int score = 0;
    char user_answer;

    printf("=== WELCOME TO THE C QUIZ GAME ===\n\n");

    // Loop through each question
    for (int i = 0; i < total_questions; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
        
        // Print the 4 options
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        // Get user input
        printf("Your answer (A, B, C, or D): ");
        scanf(" %c", &user_answer); // Note the space before %c to consume any newline character

        // Convert lowercase input to uppercase for consistency
        user_answer = toupper(user_answer);

        // Check if the answer is correct
        if (user_answer == quiz[i].correct_option) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", quiz[i].correct_option);
        }
    }

    // Display final results
    printf("=== QUIZ OVER ===\n");
    printf("Your final score: %d out of %d\n", score, total_questions);
    
    return 0;
}