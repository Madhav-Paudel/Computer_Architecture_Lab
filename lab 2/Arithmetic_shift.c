//Write a program to demonstrate implementation of arithmetic shifts  (shift in right and left).
#include<stdio.h>

void print_output1(int num[8])
{
    for(int i = 0; i<8;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
}

//arithemtic left shift
void arithmetic_left_shift(int num[8])
{
    int result[8];
    for(int i = 0;i<7;i++)
    {
        result[i] = num[i+1];
    }
    result[7]=0;
    printf("Arithmetic Left Shift : ");
    print_output1(result);
}

//arithmetic right shift
void arithmetic_right_shift(int num[8])
{
    int result[8];
    for(int i = 7;i>0;i--)
    {
        result[i] = num[i-1];
    }
    result[0]=num[0];
    printf("Arithmetic right shift: ");

    print_output1(result);
    
}


int main()
{
    int num[8];
    printf("Enter the eight bit number: ");
    for(int i = 0;i<8;i++)
    {
        scanf("%d",&num[i]);
    }

    arithmetic_left_shift(num);
    arithmetic_right_shift(num);
    return 0;

}