/*
    Write a program which accept string from user and accept one
    character. Return index of last occurrence of that character.

    Input : “Marvellous Multi OS”

    M

    Output : 11

    Input : “Marvellous Multi OS”

    W

    Output : -1

    Input : “Marvellous Multi OS”

    e

    Output : 4
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int index = 0;
    int iLastIndex=-1;

    while(str[index]!= '\0')
    {
        if(str[index]== ch)
        {
            iLastIndex = index;
            
        }
        
        index++;
    }
    return iLastIndex;


}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;


    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);
    printf("Last occurance of the character:%d\n",iRet);


    return 0;
}