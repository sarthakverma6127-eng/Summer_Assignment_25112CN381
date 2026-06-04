//Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int is_armstrong(int num) {
    if (num < 0) {
        return 0; // Negative numbers are not considered Armstrong numbers
    }

    int original_num = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Step 1: Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp to the original number

    // Step 2: Calculate the sum of digits raised to the power of 'digits'
    while (temp > 0) {
        int remainder = temp % 10;
        
        // round() is used because math.h's pow() returns a double 
        // and can suffer from minor floating-point inaccuracies
        sum += round(pow(remainder, digits)); 
        
        temp /= 10;
    }

    // Step 3: Check if the sum matches the original number
    return (sum == original_num);
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}