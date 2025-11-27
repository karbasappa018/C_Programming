// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>

   void CheckLessThan(int iNo)              //Function
{
   if (iNo < 10)                            // Buisness Logic
   {
    printf("Hello");
   }
    
   else
   {
    printf("Demo");
   }
}
   int main()
   {
      int iValue = 0;

      printf("Enter the Number");
      scanf("%d",&iValue);

      CheckLessThan(iValue);                      //Function call

    return 0;
   }