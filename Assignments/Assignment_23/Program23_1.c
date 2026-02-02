/*
   Accept N numbers from user and accept one another number as NO ,
   check whether NO is present or not.
   
   Input : N : 6
   NO : 66
   Elements :85  66  3   66  93  88
   Output : TRUE

   
   Input : N : 6
   NO: 12
   Elements :85  11  3   15  11  111
   Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int NO)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==NO)
        {
            return TRUE;
        }
    }
}


int main()
{

    int iSize=0;
    int *p = NULL;
    int iCnt = 0;
    BOOL bRet = 0;
    int iValue= 0;


    p = (int *)malloc(iSize *sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
 
    printf("Enter the Number of elements:\n");
    scanf("%d",&iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter the %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Number which we have to check:\n");
    scanf("%d",&iValue);

    bRet = Check(p,iSize, iValue);

    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else 
    {
        printf("Number is not present\n");
    }

    return 0;
}