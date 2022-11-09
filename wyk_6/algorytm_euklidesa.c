#include <stdio.h>

int NWD( int a , int b )
{
    while( a > 0 && b > 0 )
    {
        if( a > b ) a%=b;
        else b%=a;
    }
    if(a>0) return a;
    else return b;
}
int main()
{
    printf("%d",NWD(2,4));
    return 0;
}