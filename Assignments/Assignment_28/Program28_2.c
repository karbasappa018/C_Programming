/*
   Accept number of rows and number of columns from user and display below
    pattern.

    Input : iRow = 4 iCol = 4
    Output : 
                A	B	C	D	
                a	b	c	d	
                A	B	C	D	
                a	b	c	d	
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j= 0;
    char ch1 = 'A';
    char ch2 = 'a';

    for(i=1 ; i<=iRow; i++)
    {
        if(i%2 != 0)
        {
            for(j=1; j<=iCol; j++)
            {
                printf("%c\t",ch1);
                ch1++;
            }
        }
        else
        {
            for(j=1; j<=iCol; j++)
            {
                printf("%c\t",ch2);
                ch2++;
            }
        }

        printf("\n");
        ch1='A';
        ch2='a';
    }

}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter the number of rows and coloumns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}