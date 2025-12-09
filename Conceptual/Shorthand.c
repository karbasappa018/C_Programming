#include<stdio.h>

int main()
{
    int i=10;
    int j=11;
    int iAns =0;
    int jAns =0;

    iAns=i++;
    jAns=j++;

    printf("value of iAns:%d\n",&iAns);
    printf("value of jAns:%d\n",&jAns);

    return 0;

}