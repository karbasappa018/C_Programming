/*  Accept the character from user and check wheather it is Digit or not (0-9).

    Input: 7
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
    if(ch>'0' && ch<'9')
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
        printf("It is Digit ");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}


