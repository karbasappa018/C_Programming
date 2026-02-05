// Write a C program that accepts a single digit from the user and displays its word representation (0–9) using a separate function.

#include<stdio.h>

 void DisplayDigitToWord(int iNo)
 {
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0 )
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else if(iNo != 1||2||3||4||5||6||7||8||9||0)
    {
        printf("Invalid Number");
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  DisplayDigitToWord(iValue);

    return 0;
}