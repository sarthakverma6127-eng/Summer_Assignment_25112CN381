//Write a program to create ATM simulation.
#include <stdio.h>

int main() {
    int pin = 1234;          // Default preset PIN
    int entered_pin;
    int choice;
    float balance = 5000.00; // Starting account balance
    float amount;
    int pin_attempts = 0;
    int is_running = 1;

    printf("==========================================\n");
    printf("          WELCOME TO THE ATM SYSTEM       \n");
    printf("==========================================\n");

    // PIN Verification (Max 3 attempts)
    while (pin_attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == pin) {
            break; // PIN is correct, exit the check loop
        } else {
            pin_attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n\n", 3 - pin_attempts);
        }
    }

    // If PIN was entered incorrectly 3 times, lock the user out
    if (pin_attempts == 3) {
        printf("Too many incorrect attempts. Card Blocked!\n");
        printf("==========================================\n");
        return 0; // Terminate program
    }

    // Main ATM Menu Loop
    while (is_running) {
        printf("\n------------------------------------------\n");
        printf("                ATM MENU                  \n");
        printf("------------------------------------------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("------------------------------------------\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check Balance
                printf("\n>>> Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                // Deposit Money
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                
                if (amount <= 0) {
                    printf(">>> Invalid amount! Deposit must be greater than 0.\n");
                } else {
                    balance += amount; // Add money to balance
                    printf(">>> Successfully deposited: $%.2f\n", amount);
                    printf(">>> New Balance: $%.2f\n", balance);
                }
                break;

            case 3:
                // Withdraw Money
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf(">>> Invalid amount! Withdrawal must be greater than 0.\n");
                } else if (amount > balance) {
                    printf(">>> Transaction Failed: Insufficient funds!\n");
                    printf(">>> Available Balance: $%.2f\n", balance);
                } else {
                    balance -= amount; // Deduct money from balance
                    printf(">>> Successfully withdrew: $%.2f\n", amount);
                    printf(">>> Remaining Balance: $%.2f\n", balance);
                }
                break;

            case 4:
                // Exit system
                printf("\n=== THANK YOU FOR USING OUR ATM SYSTEM ===\n");
                is_running = 0; // Breaks the loop
                break;

            default:
                printf("\n>>> Invalid choice! Please select an option between 1 and 4.\n");
                break;
        }
    }

    printf("==========================================\n");
    return 0;
}