/* 
   Write a C program that accepts a number from the user and displays its multiplication table 
   in reverse order (from 10 to 1) using a separate function.

*/
#include<stdio.h>

 int TableReverse(int iNo)
 {
    int iCnt = 0;
    int iTab = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ;iCnt >= 1 ; iCnt--) 
    {
       iTab = iCnt * iNo;
        printf("%d \n",iTab);
    }
 }

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);

  TableReverse(iValue);

    return 0;
}