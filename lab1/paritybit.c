// to find out even or odd parity bit 
#include <stdio.h>

int main() {
    unsigned char num;
    int count = 0, temp;

    // Get input from user
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    temp = num;  

    // Count number of 1s in the binary representation
    while (temp > 0) {
        count += temp & 1; // Check if last bit is 1
        temp >>= 1;        // Shift right by 1 bit
    }

    // Determine parity bits
    int even_parity = (count % 2 == 0) ? 0 : 1;
    int odd_parity = (count % 2 == 0) ? 1 : 0;

    printf("Number: %d (Binary equivalent has %d ones)\n", num, count);
    printf("Even Parity Bit: %d\n", even_parity);
    printf("Odd Parity Bit: %d\n", odd_parity);

    return 0;
}
