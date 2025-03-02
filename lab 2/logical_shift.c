//Write a program to demonstrate implementation of Logical Shift Operations.
#include <stdio.h>
#include <stdlib.h>

// Function to print an 8-bit binary number
void print_output(int num[8]) {
    for (int i = 0; i < 8; i++) {
        printf("%d", num[i]);
    }
    printf("\n");
}

// Logical Left Shift
void logical_left_shift(int num[8]) {
    int result[8] = {0};  // Initialize all elements to 0
    for (int i = 0; i < 7; i++) {
        result[i] = num[i + 1];  // Shift left
    }
    result[7] = 0;  // Fill LSB with 0

    printf("Logical Left Shift  : ");
    print_output(result);
}

// Logical Right Shift
void logical_right_shift(int num[8]) {
    int result[8] = {0};  // Initialize all elements to 0
    for (int i = 7; i > 0; i--) {
        result[i] = num[i - 1];  // Shift right
    }
    result[0] = 0;  // Fill MSB with 0

    printf("Logical Right Shift : ");
    print_output(result);
}

int main() {
    int num[8];

    printf("Enter an 8-bit number (space-separated digits):\n");

    // Accept any 8 numbers (not restricted to 0s and 1s)
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);  
    }

    printf("\nOriginal Number     : ");
    print_output(num);
    
    logical_left_shift(num);
    logical_right_shift(num);

    return 0;
}
