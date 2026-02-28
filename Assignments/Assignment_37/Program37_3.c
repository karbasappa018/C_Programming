/*
    Write a program which accept string from user and accept one
    character. Return index of first occurrence of that character.

    Input : “Marvellous Multi OS”

    M

    Output : 0


    Input : “Marvellous Multi OS”

    W

    Output : -1

    
    Input : “Marvellous Multi OS”

    e

    Output : 4


*/

#include<stdio.h>

int Firstchar(char* str , char ch)
{
    int index = 0;

    while(str[index] != '\0')
    {
        if(str[index]== ch)
        {
            return index;
          
        }
        
        index++;
        
    }

    return -1;

}

int main()
{
    char Arr[20] = {'\0'};
    char cValue;
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    printf("Enter the character\n ");
    scanf(" %c",&cValue);

    iRet = Firstchar(Arr, cValue);

    printf("first occurance of the character:%d\n",iRet);
    return 0;

}