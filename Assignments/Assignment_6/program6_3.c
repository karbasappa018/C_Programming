// Write a C program that accepts two integers from the user and checks whether they are equal using a separate function.

#include<stdio.h>
#include<stdbool.h>

bool CheckEquals(int iNo1,int iNo2)
{
   if(iNo1 == iNo2)
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
   int iValue1 = 0,iValue2 =0;
   bool bRet = false;

   printf("Enter Two Number");
   scanf("%d %d",&iValue1,&iValue2);

   bRet = CheckEquals(iValue1,iValue2);

   if(bRet == true)
   {
    printf("Equal");
   }
   else
   {
    printf("Not Equal");
   }

    return 0;
}