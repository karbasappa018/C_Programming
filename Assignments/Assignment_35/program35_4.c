/*    Write a program which accept string from user and check whether 
    it contains vowels in it or not. 
    Input : “marvellous” 
    Output : TRUE 
    Input : “Demo” 
    Output : TRUE 
    Input : “xyz” 
    Output : FALSE 

*/

BOOL ChkVowel(char *str)
{ 
// Logic 
} 
int main() 
{ 
char arr[20]; 
BOOL bRet = FALSe; 
printf("Enter string"); 
scanf("%[^'\n']s",arr); 
bRet = ChkVowel(arr); 
if(bRet == TRUE) 
{ 
printf("Contains Vowel"); 
} 
else 
{ 
printf("There is no Vowel"); 
} 
return 0; 
}