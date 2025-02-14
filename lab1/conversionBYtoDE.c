// write a program to convert binary number into decimal number.

#include <stdio.h>
int main()
{
    int binarynum, weight = 1, decimal = 0;
    printf("\nThis program will convert binary number in decimal\n");
    printf("enter number in binary\n");
    scanf("%d", &binarynum);
    int temp = binarynum;
    while (binarynum != 0)
    {
        int rem = binarynum % 10;
        decimal = decimal + rem * weight;
        binarynum = binarynum / 10;
        weight = weight * 2;
    }
    printf("The binary number (%d)=(%d) in decimal number", temp, decimal);
    return 0;
}