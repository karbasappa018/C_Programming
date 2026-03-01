/*
    Write a recursive program which accept number from user and return
    summation of its digits.

    Input : 879

    Outout : 24
*/

#include<stdio.h>

int Sum(int iNo)
{
    int iSum = 0;
    
    if(iNo > 0)
    {
        iSum = iSum + (iNo%10);
        Sum(iNo/10);
    }

    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the NUmber\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d\n",iRet);

    return 0;
}