/*
    Write Recursive program which display below pattern

    A   B   C   D   E   F
*/

#include<iostream>
using namespace std;

void Display()
{
    static char cValue = 'A';

    if(cValue<='F')
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