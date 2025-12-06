#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iSum=0;
    iSum=iNo1+iNo2;
    return iSum;


}

int main()
{
    int iValue1=10;
    int ivalue2=11;
    int iAns=0;

    iAns=Addition(iValue1,ivalue2);
    printf("Addition is:%d\n",iAns);

    return 0;
}
 
