/*Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”

e

Output : TRUE

Input : “Marvellous Multi OS”

W

Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char cValue = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }


    return 0;
}