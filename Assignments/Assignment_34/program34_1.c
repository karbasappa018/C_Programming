/*  Write a program which displays ASCII table. Table contains symbol, 
    Decimal, Hexadecimal and Octal representation of every member from 
    0 to 255.

| Base    | Specifier | Meaning                       |
| ------- | --------- | ----------------------------- |
| Decimal | `%3d`     | Width 3, decimal integer      |
| Hex     | `%02X`    | 2-digit uppercase hexadecimal |
| Octal   | `%03o`    | 3-digit octal                 |

    
*/
#include<stdio.h>
#include<ctype.h>

void DisplayASCII(int iNo) 
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<=iNo; iCnt++)
    {
        if (isprint(iCnt))
            printf(" %c\t", iCnt); 
        else
            printf(" .\t"); 

        printf("%3d\t%02X\t%03o\n", iCnt, iCnt, iCnt);
    }
} 
int main() 
{ 
    int iValue = 255;
   

    DisplayASCII(iValue); 
    return 0; 
    }