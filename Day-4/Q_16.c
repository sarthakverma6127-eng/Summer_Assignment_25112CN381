//Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int is_armstrong(int num) {
    if (num < 0) return 0; // Negative numbers are not Armstrong numbers

    int original_num = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp

    // Calculate the sum of digits raised to the power of 'digits'
    while (temp > 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits)); // round() prevents floating-point inaccuracies
        temp /= 10;
    }

    // Return 1 (true) if it's an Armstrong number, otherwise 0 (false)
    return (sum == original_num);
}

int main() {
    int start, end;
    int count = 0;

    printf("Enter the starting number of the range: ");
    if (scanf("%d", &start) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the ending number of the range: ");
    if (scanf("%d", &end) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Ensure the range is valid
    if (start > end) {
        printf("Invalid range: Starting number cannot be greater than ending number.\n");
        return 1;
    }

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    // Loop through the given range
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("None found in this range.");
    }
    
    printf("\n");
    return 0;
}