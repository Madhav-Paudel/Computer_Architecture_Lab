#include<stdio.h>
int subtractBinary(int a,int b)
{
    int result=0,borrow=0,place=1;
    if(a<b)
    {
        int temp=a;
         a=b;
         b=temp;

    }
    while (a>0 ||b>0)
    {
        int bit1=a%10;
        int bit2=b%10;
        if(borrow)
        {
            if(bit1==1)
            {
                bit1=0;
                borrow=0;
            }
            else
            {
                bit1=1;
                borrow=1;

            }
        }
        int subBit;
        if(bit1>bit2)
        {
            subBit=bit1-bit2;
            
        }
        else
        {
            subBit=(bit1+2)-bit2;
            borrow=1;
        }
        result=result+(subBit*place);
        place=place*10;
        a=a/10;
        b=b/10;

    }
    return result;
    
}
int main()
{
    int a,b;
    printf("Enter first binary number:");
    scanf("%d",&a);
    printf("Enter second binary number:");
    scanf("%d",&b);
    int diff=subtractBinary(a,b);
    printf("Difference:%d\n",diff);
}