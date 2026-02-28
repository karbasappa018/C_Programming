/*
    Write a program which accept string from user reverse that string
    in place.

    Input : “abcd”

    Output : “dcba”

    Input : “abba”

    Output : “abba”
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *temp = str;
    
    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }

}

int main()
{
    char Arr[100];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    return 0;
}