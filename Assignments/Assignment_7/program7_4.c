// Write a C program that accepts a number from the user and displays all odd numbers from 1 up to that number using a separate function

#include<stdio.h>

 void DiplayOddNumbers(int iNo)
 {
    int iCnt;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo; iCnt++) 
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ",iCnt);
        }
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  DiplayOddNumbers(iValue);

    return 0;
}