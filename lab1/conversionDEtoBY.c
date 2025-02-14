// write a program to convert decimal number into binary number

#include <stdio.h>
int main()
{
    int decimalnum, weight = 1, rem, binary = 0;
    printf("\nThis program will convert decimal number into binary number\n");
    printf("enter number in decimal number \n");
    scanf("%d",&decimalnum);
    int temp = decimalnum;
    while (decimalnum != 0)
    {
        rem = decimalnum % 2;
        binary = binary + rem * weight;
        decimalnum = decimalnum / 2;
        weight = weight * 10;
    }
     printf("The decimal number (%d)=(%d) into binary number", temp, binary);
    return 0;

    
}