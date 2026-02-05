// Write a C program that accepts a number from the user and displays numbers from -N to N using a separate function.

#include<stdio.h>

 void DisplayNumberLine(int iNo)
 {
    int iCnt;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo ;iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt );
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  DisplayNumberLine(iValue);

    return 0;
}