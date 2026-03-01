/*
    Write Recursive program which display below pattern

    a   b   c   d   e   f
*/

#include<iostream>
using namespace std;

void Display()
{
    static char cValue = 'a';

    if(cValue<='f')
    {
        cout<<cValue<<"\t";
        cValue++;
        Display();
    }

    cout<<"\n";
}

int main()
{
    Display();
    return 0;

}