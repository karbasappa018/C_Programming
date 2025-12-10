//  Check even or odd

#include<stdio.h>

void ChecckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
   int iValue = 0;

   printf("Enter the Number:");
   scanf("%d",&iValue);

   ChecckEvenOdd(iValue);
   
   return 0;
}