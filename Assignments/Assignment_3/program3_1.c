#include<stdio.h>

  int PrintEvenNumbers(int iNo)
  {
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
 
    for(iCnt = 2;iCnt <= iNo; iCnt = iCnt+2)
    {
        printf("%d\n",iCnt);
    }

  }

  int main()
{
  int iValue = 0;

  printf("Enter the Number");
  scanf("%d",&iValue);

  PrintEvenNumbers(2*iValue); 

    return 0;
}