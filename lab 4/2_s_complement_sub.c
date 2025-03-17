// write a c program to subtract binary number by using 2's complement 
#include <stdio.h>
#include <string.h>

// Function to compute the one's complement by flipping all bits
void onesComplement(char binary[]) {
    for (int i = 0; i < 4; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
}

// Function to add one to the one's complement to get the two's complement
void addone(char binary[]) {
    int carry = 1;
    for (int i = 3; i >= 0; i--) {
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
            // Carry remains 1, continue to next bit
        } else if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
            break; // No further changes needed
        }
        // If carry is 0, remaining bits stay unchanged
    }
}

// Function to add two binary numbers and store the result
void binaryAddition(char a[], char b[], char result[]) {
    int carry = 0;
    for (int i = 3; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        int bit = sum % 2;          // Current bit is sum modulo 2
        carry = sum / 2;            // Carry for next bit is sum divided by 2
        result[i] = bit + '0';      // Convert bit back to char
    }
}

// Main function to perform subtraction using 2's complement
int main() {
    char A[5], B[5]; // Arrays with space for null terminator
    printf("Enter first binary number (4 bits): ");
    scanf("%4s", A);
    printf("Enter second binary number (4 bits): ");
    scanf("%4s", B);

    // Compute the two's complement of B
    char B_comp[5];
    strcpy(B_comp, B);          // Copy B to B_comp
    onesComplement(B_comp);     // Flip all bits
    addone(B_comp);             // Add one to get two's complement

    // Perform subtraction: A - B = A + (two's complement of B)
    char result[5] = {0};       // Initialize result with zeros, null-terminated
    binaryAddition(A, B_comp, result);

    // Output the result
    printf("The subtraction result is: %s\n", result);
    return 0;
}

// ALGORITHM 
// Step 1: Start
// Step 2: Declare two character arrays A[5] and B[5] to store two 4-bit binary numbers.
// Step 3: Read the two 4-bit binary numbers from the user.
// Step 4: Compute the 2’s complement of B:
// -Copy B into B_comp.
// -Compute the 1’s complement by flipping all bits.
// -Add 1 to the 1’s complement to get the 2’s complement.
// Step 5: Perform binary addition:
// -Add A and B_comp bit by bit from right to left.
// -Use carry to handle bit overflow.
// -Store the result in result[5].
// Step 6: Display the subtraction result.
// Step 7: Stop.