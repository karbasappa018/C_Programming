/*
    Accept N numbers from user and display all such numbers which contains
    3 digits in it.

    Input : N : 6
    Elements :8225   665    3    76   953    858

    Output : 665 953 858
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Digits()
//  Description :   It is used to display all such numbers which 
//                  contains 3 digits in it.       
//  Input :         int , int
//  Output :        int
//  Author :        Karbasappa Dattatray Tadakale
//  Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////

void Digits(int Arr[],int iLength)
{
     int iCnt = 0;
     int iDigit = 0;
     int iDigitCount = 0;
     int temp = 0;

     printf("Number which contains three digit in it\n");
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        temp = Arr[iCnt];
        while(Arr[iCnt]>0)
        {
            iDigit = Arr[iCnt]%10;
            iDigitCount++;
            Arr[iCnt] = Arr[iCnt]/10;

        }

        if(iDigitCount == 3)
        {
            printf("%d\n",temp);
        }

        iDigitCount = 0;
        temp = 0;

     } 

    
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the number of elememts\n");
    scanf("%d",&iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter the %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);
   

    free(p);
}  // End of main