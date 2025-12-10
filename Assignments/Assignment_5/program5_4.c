//  Check positive negative or zero 

#include<stdio.h>

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number");
    }
    else if (iNo < 0)
    {
        printf("Negative Number");
    }
    else if (iNo == 0)
    {
        printf("Number is Zero");
    }
}

int main()
{
 int iValue = 0;

 printf("Enter the Number");
 scanf("%d",&iValue);

    CheckNumberType(iValue);

    return 0;
}