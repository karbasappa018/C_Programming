/*
    Accept N numbers from user and return product of all odd elements.
    Input : N : 6

    Elements :15 66 3 70 10 88

    Output : 45
    Input : N : 6

    Elements :44 66 72 70 10 88

    Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength )
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iProduct = iProduct*Arr[iCnt];
        }
    }
    
    return iProduct;
    
}


int main()
{

    int iSize=0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    
    iRet = Product(p,iSize);

    printf("product of all odd numbers :%d\n",iRet);

    
    return 0;
}