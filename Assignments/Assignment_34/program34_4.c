 /*   Accept Character from user and check whether it is special symbol 
    or not (!, @, #, $, %, ^, &, *). 
    Input  : % 
    Output : TRUE 
    Input  : d 
    Output : FALSE 
*/

#include<stdio.h>
#include<stdbool.h>

typedef bool BOOL;



BOOL ChkSpecial(char ch) 
{ 
    if(ch=='!'|| ch=='@' || ch =='#'|| ch =='$'|| ch == '%'||ch=='^'||ch=='&'||ch=='*')
    {
        return true;
    }
    else
    {
        return false;
    }

} 
int main() 
{ 
char cValue = '\0'; 
BOOL bRet = false; 
printf("Enter the character\n"); 
scanf("%c",&cValue); 
bRet = ChkSpecial(cValue); 
if(bRet == true) 
{ 
printf("It is special Character\n"); 
} 
else 
{ 
printf("It is not a special Character\n"); 
} 
return 0; 
}