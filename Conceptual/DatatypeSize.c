#include<stdio.h>

int main()
{
    char cValue='S';
    int iValue=11;
    float fValue=90.56f;
    double dValue=98.789645;
    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);
    printf("%lf\n",dValue);

    printf("%lu\n",sizeof(cValue));
    printf("%lu\n",sizeof(iValue));
    printf("%lu\n",sizeof(fValue));
    printf("%lu\n",sizeof(dValue));

    printf("Adderess of cValue:",&cValue);
    printf("Adderess of iValue:",&iValue);
    printf("Adderess of fValue:",&fValue);
    printf("Adderess of dValue:",&dValue);
    return 0;
}