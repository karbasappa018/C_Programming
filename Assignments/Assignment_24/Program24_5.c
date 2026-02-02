/*
    Accept N numbers from user and display summation of digits of each
    number.

    Input : N : 6
    Elements :8225 665 3 76 953 858

    Output : 17 17 3 13 17 21
    
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
//  Function Name : DigitSum()
//  Description :   It is used to display summation of all digits 
//                  of each number      
//  Input :         int , int
//  Output :        int
//  Author :        Karbasappa Dattatray Tadakale
//  Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////

void DigitSum(int Arr[],int iLength)
{
     int iCnt = 0;
     int iDigit = 0;
     int iSum = 0;

     printf("Summation if digits of each number : \n");
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        while(Arr[iCnt]>0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt]/10;

        }

       printf("%d\t",iSum);
       iSum = 0;

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

    DigitSum(p, iSize);
   

    free(p);
}  // End of main