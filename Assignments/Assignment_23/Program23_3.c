/*
   Accept N numbers from user and accept one another number as NO ,
   return index of Last occurrence of that NO.
   
   Input : N : 6
   NO : 66
   Elements :85  66  3   66  93  88
   Output : 3

   Input : N : 6
   NO : 93
   Elements :85  66  3   66  93  88
   Output : 4

   
   Input : N : 6
   NO: 12
   Elements :85  11  3   15  11  111
   Output : -1

*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int NO)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == NO && iCnt>= iIndex)
        {
               // Last occurrence index
            
            iIndex = iCnt;
          
            
        }
    }
    
    return iIndex;
}


int main()
{

    int iSize=0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = LastOcc(p,iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else 
    {
        printf("last occurnce of number is :%d\n",iRet);
    }

    return 0;
}