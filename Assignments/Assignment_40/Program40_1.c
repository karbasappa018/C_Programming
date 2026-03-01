/* 
    Write Recursive program which display below pattern.

    Input: 5

    Output: *   *   *   *   *
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("*\t");
        iNo--;
        Display(iNo);
    } 

    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the Numbeer\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
