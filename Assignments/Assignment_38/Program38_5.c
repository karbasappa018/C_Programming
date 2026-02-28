/*
    
    Write a program which accept string from user and copy that
    characters of that string into another string by toggling the case.

    Input : “Marvellous Python 2”

    Output : “mARVELLOUS pYTHON 2”

*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    char *temp = src;

    while(*src != '\0')
    {
        if(*src >= 'A' && *src <='Z')
        {
            *src = *src+32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
        }

        src++;
    }

    src = temp;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30]= "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);

    printf("%s",brr);
    return 0;
}