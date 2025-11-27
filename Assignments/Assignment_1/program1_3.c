//  program to print 5 to 1 numbers on screen

#include<stdio.h>

int Display()
{
    int iCnt = 0;                       //  Loop Counter

    iCnt=5;                             
    while(iCnt > 0)                     //  Buisness Logic
    {
        printf("%d\n",iCnt);            
        iCnt--;                         
    }
}
 

int main ()
{
    Display();                         //   Function Call

    return 0;
}  