/*
    Write a recursive program which accept number from user and return its
    product of digits.

    Input : 523

    Output : 30


*/

#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;

    if(iNo> 0)
    {
        iMult = iMult * (iNo%10);
        Mult(iNo/10);
    }

    return iMult;

}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("%d\n",iRet);
    return 0;
}