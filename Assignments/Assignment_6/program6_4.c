// Write a C program that accepts three integers from the user and returns their multiplication.

#include<Stdio.h>

int MultiplyNumbers(int iNo1,int iNo2,int iNo3)
{
    int mul = 0;
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    mul = iNo1 * iNo2 * iNo3;
}


int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("Enter Three Numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = MultiplyNumbers(iValue1,iValue2,iValue3);
    printf("Multiplication of Numbers are : %d",iRet);

    return 0;
}