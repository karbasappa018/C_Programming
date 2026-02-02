/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description :   It is used to display all such elements which
//                  are multiples of 11.     
//  Input :         int , int
//  Output :        int
//  Author :        Karbasappa Dattatray Tadakale
//  Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////

void Display(int Arr[],int iLength)
{
     int iCnt = 0;

     printf("Numbers which are multipls of 11:\n");
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]%11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Display(p, iSize);

    free(p);
}  // End of main