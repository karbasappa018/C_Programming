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

    printf("Adderess of cValue:%lu\n",&cValue);
    printf("Adderess of iValue:%lu\n",&iValue);
    printf("Adderess of fValue:%lu\n",&fValue);
    printf("Adderess of dValue:%lu\n",&dValue);
    return 0;
}