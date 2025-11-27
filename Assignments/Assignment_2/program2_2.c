//  Accept the one number from user and print that number of * on screen

#include<stdio.h>

void DisplayStar(int iNo)
{
    if(iNo < 0)                          //Updater
    {
        iNo = iNo * -1;
    }
    while(iNo > 0)                     //Buisness Logic
    {
        printf("*\n");
        iNo--;
    }

}

int main()
{
   int iValue = 0;                    // local variable of main
    
    printf("Enter The Number");
    scanf("%d",&iValue);

    DisplayStar(iValue);             //Function call  


    return 0;

}