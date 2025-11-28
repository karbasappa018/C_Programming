#include<stdio.h>

  int DisplayEvenFactors(int iNo)
  {
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
 
    for(iCnt = 2;iCnt <= (iNo/2);iCnt=iCnt+2)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
        printf("%d\n",iCnt);
        }
    }
  }

  int main()
{
  int iValue = 0;

  printf("Enter the Number");
  scanf("%d",&iValue);

  DisplayEvenFactors(iValue); 

    return 0;
}