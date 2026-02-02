/*
    Accept N numbers from user and return the difference between largest
    and smallest number.

    Input : N : 6
    Elements :85 66 3 66 93 88

    Output : 90 (93 -3)

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
//  Function Name : Difference()
//  Description :   It is used to return the difference between
//                  largest number and smallest number        
//  Input :         int , int
//  Output :        int
//  Author :        Karbasappa Dattatray Tadakale
//  Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
     int iCnt = 0;
     int iMax = 0;
     int iMin = Arr[0];
     int iDiff = 0;

     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    } 

     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]<=iMin)
        {
            iMin = Arr[iCnt];
        }
    } 

    iDiff = iMax - iMin;
    return iDiff;

   
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
    int iRet = 0;
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

    iRet = Difference(p, iSize);
    printf("Difference between largest and smallest number:%d\n",iRet);

    free(p);
}  // End of main