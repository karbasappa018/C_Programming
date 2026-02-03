/*  Accept the character from user and check wheather it is alphabet or not (A-Z a-z).

    Input: F
    Output:TRUE
    Input:&
    Output:FALSE
*/

#include<stdio.h>


#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkAlpha(char ch)
{
    if(ch>'A' && ch<'Z'||ch>'a' && ch<'b')
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
        printf("It is character");
    }
    else
    {
        printf("It is not character");
    }

    return 0;
}


