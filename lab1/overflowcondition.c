// Write a program to check overflow condition while adding two binary numbers(4-bit)
#include<stdio.h>

//function to add binary numbers bitwise
int add_binary(int num1, int num2)
{
    int bit1,bit2,bit_sum,sum=0,carry = 0,weight = 1,digits=0;
    while(num1>0 || num2>0 || carry>0)
    {
        bit1 = num1%10;
        bit2 = num2%10;
        bit_sum = bit1+bit2+carry;

        carry= bit_sum/2;
        sum += (bit_sum%2)*weight;

        num1/=10;
        num2/=10;
        weight*=10;
        digits++;
 
    }
    printf("Sum = %d\t",sum);

    if(digits>4)
    {
        printf("There is an overflow condition");
    }

    else{
        printf("There is no overflow condition");
    }
}


int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    add_binary(num1,num2);
    return 0;
}