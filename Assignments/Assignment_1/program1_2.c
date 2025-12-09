// program to print 5 times "Marvellous " on screen

#include<stdio.h>

void Display()                                  // Function
{
   int iCnt = 0;                                // Loop Counter
    
   for(iCnt = 1;iCnt <= 5 ; iCnt++)             // Buisness Logic
   {
    printf("Marvellous\n");
   }

}


  int main()
  {
     Display();                                 // Function Call

    return 0;
  }