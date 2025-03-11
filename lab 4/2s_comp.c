// c program to convert 4 bit binary number into 2's compelement 
#include <stdio.h>
void onesComplement(char binary[]) {
    for (int i = 0; i < 4; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
}

void addOne(char binary[]) {
    int carry = 1;
    for (int i = 3; i >= 0; i--) { 
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0'; 
        } else if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
        }
    }
}

int main() {
    char binary[5]; 
    printf("Enter a 4-bit binary number: ");
    scanf("%4s", binary); 

    onesComplement(binary);

    addOne(binary);

    printf("2's Complement: %s\n", binary);
    
    return 0;
}
