#include<stdio.h>

int main()
{

    int i=10;
    int j=-10;
    int k=+10;

    signed int x=10;
    signed int y=-10;
    signed int z=+10;

    unsigned int a=10;
    unsigned int b=-10;
    unsigned int c=+10;
    
//  size of unsigned integer
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(z));

    //size of signed integer
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));



    return 0;
}