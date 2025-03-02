// Write a program to demonstrate the implementation of circular shift operations (shift in right and left).

#include<stdio.h>

void output(int num[])
{
    for(int i = 0;i<8;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
}

void circular_right_shift(int num[])
{
    int result[8];
    result[0] = num[7];
    for(int i =1; i<8;i++)
    {
        result[i] = num[i-1];
    }
    printf("Circular Right Shift: ");
    output(result);
}

void circular_left_shift(int num[])
{
    int result[8];
    result[7] = num[0];
    for(int i =6; i>=0;i--)
    {
        result[i] = num[i+1];
    }
    printf("Circular Left Shift: ");
    output(result);
}

int main()
{
    int num[8];
    printf("Enter the 8 bit number: ");
    for(int i = 0; i<8;i++)
    {
        scanf("%d",&num[i]);
    }

    circular_right_shift(num);
    circular_left_shift(num);
}