/* 
   Write a C program that accepts a number from the user and
   calculates its factorial using a separate function.

*/


#include<stdio.h>

 int FactorialOfNumber(int iNo)
 {
    int iCnt;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo ; iCnt++) 
    {
        iFact = iFact * iCnt;
    }
    return iFact;
 }


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  iRet = FactorialOfNumber(iValue);
  printf("Factorial OF Number is %d",iRet);

    return 0;
}