// write a program to add binary number or decimal number if user enter decimal number then convert it into binary then 
// if the added number contain more than 4 digits then print the user the number is overflow 
#include <stdio.h>
#include <stdlib.h>

// Function to convert decimal to binary (returns an integer representation)
int conv(int number) {
    int weight = 1, rem, binary = 0;
    while (number != 0) {
        rem = number % 2;
        binary = binary + rem * weight;
        number = number / 2;
        weight = weight * 10;
    }
    return binary;
}

// Function to count the number of binary digits
int countBinaryDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to perform binary addition
int binaryAddition(int bin1, int bin2) {
    int sum = 0, carry = 0, weight = 1;
    
    while (bin1 > 0 || bin2 > 0 || carry > 0) {
        int bit1 = bin1 % 10;
        int bit2 = bin2 % 10;
        int bitsum = bit1 + bit2 + carry;
        
        sum += (bitsum % 2) * weight; // Store the binary digit
        carry = bitsum / 2;  // Compute carry
        
        bin1 /= 10;
        bin2 /= 10;
        weight *= 10;
    }
    
    return sum;
}

int main() {
    char choose;
    int decimalNum1, decimalNum2, binaryNum1, binaryNum2, result;

    printf("\nEnter 'A' to input decimal numbers, 'B' for binary numbers: ");
    scanf(" %c", &choose); // Added space before %c to handle newline character

    if (choose == 'A' || choose == 'a') {
        printf("Enter first decimal number: ");
        scanf("%d", &decimalNum1);
        printf("Enter second decimal number: ");
        scanf("%d", &decimalNum2);

        printf("Converting decimal numbers to binary...\n");
        binaryNum1 = conv(decimalNum1);
        binaryNum2 = conv(decimalNum2);
        
    } else if (choose == 'B' || choose == 'b') {
        printf("Enter first binary number (max 4 bits): ");
        scanf("%d", &binaryNum1);
        printf("Enter second binary number (max 4 bits): ");
        scanf("%d", &binaryNum2);
        
        // Validate binary input
        if (countBinaryDigits(binaryNum1) > 4 || countBinaryDigits(binaryNum2) > 4) {
            printf("Error: Binary numbers must be 4 bits or less!\n");
            return 1;
        }
    } else {
        printf("Invalid choice! Please enter 'A' or 'B'.\n");
        return 1;
    }

    // Perform binary addition
    result = binaryAddition(binaryNum1, binaryNum2);
    
    printf("Binary Sum: %d\n", result);
    
    // Check for overflow (if result has more than 4 digits)
    if (countBinaryDigits(result) > 4) {
        printf("Overflow detected! The sum exceeds 4-bit limit.\n");
    }

    return 0;
}
