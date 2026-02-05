/* 
   Write a C program that accepts a number from the user and displays whether
   the number is Small, Medium, or Greater using a separate function.

*/

#include<stdio.h>

 void NumberLessThanGreaterThan(int iNo)
 {
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 50 )
    {
        printf("Number is Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Number is Medium");
    }
    else if(iNo > 100)
    {
        printf("Number is Greater");
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  NumberLessThanGreaterThan(iValue);

    return 0;
}