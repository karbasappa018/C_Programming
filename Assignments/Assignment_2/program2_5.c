//  Acccept number from user and check wheather number is even or odd.

#include<stdio.h>
#include<stdbool.h>

  bool CheckEvenOrOdd(int iNo)
  {
    if(iNo % 2 == 0)
    {
        return true;   
    }
    else
    {
        return false;
    }
  }

int main()
{
   int iValue = 0;
   bool bRet = 0;

   printf("Enter the Number");
   scanf("%d",&iValue);

   bRet = CheckEvenOrOdd(iValue);
 
    if(bRet == true)
    {
      printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    return 0;
}