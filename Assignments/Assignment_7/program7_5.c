// Write a C program that accepts a number from the user and displays the first five multiples of that number using a separate function.

#include<stdio.h>

 void MultiplyDisplay(int iNo)
 {
    int iCnt;
    int mul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= 5 ; iCnt++) 
    {
         mul = iCnt * iNo;
        {
            printf("%d ",mul);
        }
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  MultiplyDisplay(iValue);

    return 0;
}