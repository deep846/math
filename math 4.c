#include <stdio.h>
#incde <conio.h>

int main()
{
    int a,b,c,s;
    flot avg,d;
    printf("\ntype 3 number:- ");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    avg=s/3;
    d=(s-avg);
    pritf("\n Difference=%f",d);
    return 0;
}
