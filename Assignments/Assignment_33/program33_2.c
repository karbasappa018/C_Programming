/*  Accept the character from user and check wheather it is Capital or not (A-Z).

    Input: F
    Output:TRUE
    Input:d
    Output:FALSE
*/

#include<stdio.h>


#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkAlpha(char ch)
{
    if(ch>'A' && ch<'Z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = chkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("It is Capital ");
    }
    else
    {
        printf("It is not Capital");
    }

    return 0;
}


