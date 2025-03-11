// c program to convert 4 bit binary number into 1's compelement 

#include <stdio.h>
int main() {
    char binary[5];  
    printf("Enter a 4-bit binary number: ");
    scanf("%4s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';  
        else if (binary[i] == '1')
            binary[i] = '0';  
        else {
            printf("Invalid input. Please enter a 4-bit binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);
    return 0;
}
