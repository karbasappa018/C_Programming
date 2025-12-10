//  Find maximum of two numbers

#include<stdio.h>

int CheckMax(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
  int iValue1,iValue2,result;

  printf("Enter two Numbers:");
  scanf("%d %d",&iValue1,&iValue2);

  result = CheckMax(iValue1,iValue2);
  
  printf("Maximum Number is: %d\n",result);

    return 0;
}