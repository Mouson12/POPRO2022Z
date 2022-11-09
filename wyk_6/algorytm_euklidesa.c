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
    fflush(stdin);//szyszczenie bufora wejściowego
    int a=0,b=0;
    printf("Wpisz dwie liczby, dla ktorych chcesz uzyskac nwd :\n");
    scanf("%d %d",&a,&b);
    printf("nwd tych liczb to : %d",NWD(a,b));
    return 0;
    
}