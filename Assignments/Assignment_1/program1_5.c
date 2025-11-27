//  Accept the one number from user and print that nunber of * on screen

#include<stdio.h>

void DisplayStar(int iNo)
{
    int iCnt =0;                            //  Loop counter

    for(iCnt = 1; iCnt <= iNo ; iCnt++)     //  Buisness Logic
    {
        printf("*\n");
    }
}

int main()
{
   int iValue = 0;                     
    
    printf("Enter The Number");
    scanf("%d",&iValue);

    DisplayStar(iValue);                    //  Function call  


    return 0;

}