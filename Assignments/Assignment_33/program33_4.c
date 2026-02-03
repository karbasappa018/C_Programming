/*  Accept the character from user and check wheather it is small case or not (A-Z).

    Input: g
    Output:TRUE
    Input:F
    Output:FALSE
*/

#include<stdio.h>


#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkAlpha(char ch)
{
    if(ch>'a' && ch<'z')
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
        printf("It is in small case ");
    }
    else
    {
        printf("It is not in small case");
    }

    return 0;
}


