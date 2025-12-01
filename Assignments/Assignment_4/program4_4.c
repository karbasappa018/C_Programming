/*  a program which accept number from user and return summation of all its 
    non factors. 
    Input  : 12 
    Output : 50
    Input  : 10
    Output : 37

*/

#include<stdio.h>

 int SumOFNonFactor(int iNo)
 {
   int iCnt = 0;
   int iFrequency = 0;
   if(iNo < 0)
   {
    iNo = -iNo;
   }

   for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
   {
    if(iNo % iCnt != 0 )
    {
       iFrequency = iFrequency + iCnt;
    }
   }
 return iFrequency;

 } 

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number");
  scanf("%d",&iValue);

  
  iRet =  SumOFNonFactor(iValue);

  printf("%d",iRet);

    return 0;
}