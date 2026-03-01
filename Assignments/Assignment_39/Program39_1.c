/* Write Recursive program which display below pattern.

Output : *  *   *   *   *

*/



#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        cout<<"*\t";
        iCnt++;
        Display();
    }

    printf("\n");


}
int main()
{
    Display();
    return 0;
}