// c program to logical shift in right and left 
#include <stdio.h>

// Function to perform logical right shift
int logicalRightShift(int num[], int result[]) {
    for (int i = 3; i >= 0; i--) {
        if (i - 1 >= 0) {
            result[i] = num[i - 1];
        } else {
            result[i] = 0;
        }
    }
    return 0;
}

// Function to perform logical left shift
int logicalLeftShift(int num[], int result[]) {
    for (int i = 0; i < 4; i++) {
        if (i + 1 < 4) {
            result[i] = num[i + 1];
        } else {
            result[i] = 0;
        }
    }
    return 0;
}

int main() {
    int num[4];
    int shiftedRight[4];
    int shiftedLeft[4];

    printf("Enter the binary Number (4 bit)  \n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }

    printf("Original binary number: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", num[i]);
    }
    printf("\n");

    logicalRightShift(num, shiftedRight);
    printf("Logical right shift: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", shiftedRight[i]);
    }
    printf("\n");

    logicalLeftShift(num, shiftedLeft);
    printf("Logical left shift: ");
    for (int i = 0; i < 4; i++) {
        printf("%d", shiftedLeft[i]);
    }
    printf("\n");

    return 0;
}
