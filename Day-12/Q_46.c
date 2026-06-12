//Write a program to Write function for Armstrong.

#include <stdio.h>

// A simple, reliable function to calculate base raised to the power of exp
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int digitCount = 0;
    int sum = 0;

    // Count how many digits the number has
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    // Reset temp and calculate the sum of digits raised to digitCount
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digitCount);
        temp /= 10;
    }

    // If the sum matches the original number, it's an Armstrong number
    return (sum == originalNum);
}

int main() {
    int inputNumber;

    printf("Enter an integer to check: ");
    if (scanf("%d", &inputNumber) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(inputNumber)) {
        printf("%d is an Armstrong number.\n", inputNumber);
    } else {
        printf("%d is not an Armstrong number.\n", inputNumber);
    }

    return 0;
}