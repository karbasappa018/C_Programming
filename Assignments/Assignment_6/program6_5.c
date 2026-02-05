// Write a C program to accept total marks and obtained marks from the user and calculate the percentage using a separate function.

#include<stdio.h>

 float CalculatePercentage(int iNo1,int iNo2)
 {
    float Percentage = 0.0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
     if (iNo2 == 0)
    {
        iNo2 = 1;
    }
      Percentage = ((float)iNo1 / (float)iNo2) * 100;

      return Percentage;
 }  

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Enter Total Marks:");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1,iValue2);

    printf("Percentage is : %f",fRet);

    return 0;
}