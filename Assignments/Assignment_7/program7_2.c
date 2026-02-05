// Write a C program that accepts a number from the user and displays numbers from 1 up to that number using a separate function.

#include<stdio.h>

 void DisplayEachNumber(int iNo)
 {
    int iCnt;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt );
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  DisplayEachNumber(iValue);

    return 0;
}