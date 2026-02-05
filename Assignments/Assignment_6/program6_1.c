// Write a C program to accept the user's full name and display it on the screen.

#include<stdio.h>



int main()
{
   char sName[30];

   printf("Please Enter Your Full Name : ");
   scanf("%s ",&sName);

   printf("Your name is %s",sName);

    return 0;
}