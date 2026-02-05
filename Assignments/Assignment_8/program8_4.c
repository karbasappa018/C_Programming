/* 
   Write a C program that accepts a number from the user and displays
   its multiplication table up to 10 using a separate function 
*/
#include<stdio.h>

 int Table(int iNo)
 {
    int iCnt = 0;
    int iTab = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt <= 10 ; iCnt++) 
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

  Table(iValue);

    return 0;
}