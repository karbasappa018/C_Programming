//  Check Leap year

#include<stdio.h>

void CheckLeapYear(int iYear)
{
    if(iYear % 4 == 0 || iYear % 400 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Normal Year");
    }
}

int main()
{
    int iValue = 0;
 
    printf("Enter The Year");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return 0;
}