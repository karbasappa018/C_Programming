#include<stdio.h>

int main()
{
    int iNo1=20;
    const int iNo2=20;  //iNo2 is integer constant type

    //Below lines generates the errors 
    iNo1++;
    iNo2++;     //error
    return 0;
}