/*
    Write Recursive program which display below pattern.

    Output: 1   2   3   4   5
*/

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        cout<<iCnt<<"\t";
        iCnt++;
        Display();
    }

    cout<<"\n";

}

int main()
{
    Display();
    return 0;
}