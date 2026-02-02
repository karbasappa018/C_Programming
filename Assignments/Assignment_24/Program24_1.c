/*
    Accept N numbers from user and return the largest number.

    Input : N : 6
    Elements :85 66 3 66 93 88

    Output : 93

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
//  Function Name : Maximum()
//  Description :   It is used to return the largest number        
//  Input :         int , int
//  Output :        int
//  Author :        Karbasappa Dattatray Tadakale
//  Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////

int Maximum(int Arr[],int iLength)
{
     int iCnt = 0;
     int iMax = 0;

     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    } 

    return iMax;
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

    iRet = Maximum(p, iSize);
    printf("largest Number from above numbers:%d\n",iRet);

    free(p);
}  // End of main