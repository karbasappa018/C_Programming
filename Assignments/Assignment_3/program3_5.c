#include<stdio.h>
  
  void CheckVowel(char CValue)
  {
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I'|| CValue == 'O' || CValue == 'U') 
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
  }

  int main()
  {
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

  CheckVowel(cValue);


    return 0;
  }