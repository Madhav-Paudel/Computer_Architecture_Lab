// to add binary number
#include<stdio.h>
int addBinary(int a,int b)
{
    int result=0,carry=0,place=1;
    while (a>0|| b>0||carry>0)
    {
        int bit1=a%10;  // Extract last bit of a
        int bit2=b%10; // Extract last bit of b
        int sum=bit1+bit2+carry; // sum of bits and carry 
        int newBit=sum%2; //new bit to be added in result 
        carry =sum /2; // carry for the next step 
        result=result+(newBit*place); // add new bit to result 
        place=place * 10; // move to the next binary place
        a=a/10; // remove last bit from a
        b=b/10; // remove last bit from b



    }
    return  result;

    
}
int main()
{
    int a,b;
    printf("Enter first binary number:");
    scanf("%d",&a);
    printf("Enter second binary number:");
    scanf("%d",&b);
    int sum=addBinary(a,b);
    printf("sum:%d\n",sum);


}