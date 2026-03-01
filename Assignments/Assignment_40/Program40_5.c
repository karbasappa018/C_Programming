/* 
    Write Recursive program which display below pattern.

    Input: 6

    Output: a   b   c   d    e    f
*/

#include<stdio.h>

void Display(int iNo)
{
    static char cValue = 'a';

    if(iNo >=1)
    {  
        printf("%c\t",cValue);
        cValue++;
        Display(iNo-1);
              
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
