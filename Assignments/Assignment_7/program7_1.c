// Write a C program that accepts a number from the user and prints the pattern $ * that many times using a separate function

#include<stdio.h>

 void PatternPrint(int iNo)
 {
    int iCnt;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  PatternPrint(iValue);

    return 0;
}