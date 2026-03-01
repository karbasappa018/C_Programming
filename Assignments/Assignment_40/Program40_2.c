/* 
    Write Recursive program which display below pattern.

    Input: 5

    Output: 1   2   3   4   5
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=1)
    {
        
        Display(iNo-1);
        printf("%d\t",iNo);
    }
    else
    {

        printf("\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
