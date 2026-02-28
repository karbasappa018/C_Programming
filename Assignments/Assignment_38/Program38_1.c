/*
    Write a program which accept string from user and copy that
    characters of that string into another string in reverse order.

    Input : “Marvellous Python”

    Output : “nohtyP suollevraM”
*/

#include<stdio.h>

void StrCpyRev(char *src ,char *dest)
{
   
    char *temp = src;

    while(*src != '\0')
    {
        src++;
    }

    src--;

    while(src >= temp)
    {
        
        *dest = *src;
        src--;
        dest++;
    }

    *dest = '\0';   // Add '\0' at the end
}

int main()
{
    char arr[30] = "Marvellous python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}