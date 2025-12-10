// Find largest among three numbers

#include<stdio.h>

int CheckLargest(int iNo1,int iNo2,int iNo3)
{
   if(iNo1 > iNo2) 
   {
    return iNo1;
   }
   else if (iNo1 > iNo3)
   {
    return iNo1;
   }
   else  if (iNo2 > iNo3)
   {
    return iNo2;
   }
   else 
   {
    return iNo3;
   }

}

int main()
{
 int iValue1,iValue2,iValue3,result;

 printf("Enter three Number");
 scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    result = CheckLargest(iValue1,iValue2,iValue3);
    printf("Largest Number is %d\n",result);

    return 0;
}