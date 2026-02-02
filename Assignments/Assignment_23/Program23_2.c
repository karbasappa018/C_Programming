/*
   Accept N numbers from user and accept one another number as NO ,
   return index of first occurrence of that NO.
   
   Input : N : 6
   NO : 66
   Elements :85  66  3   66  93  88
   Output : 1

   
   Input : N : 6
   NO: 12
   Elements :85  11  3   15  11  111
   Output : -1

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int NO)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == NO)
        {
            return iCnt;   // first occurrence index
        }
    }
    
    return -1;
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

    iRet = FirstOcc(p,iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else 
    {
        printf("first occurnce of number is :%d\n",iCnt);
    }

    return 0;
}