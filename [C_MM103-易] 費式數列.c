#include<stdio.h>

int main()
{
    int a , b , c , d ,e;
    a=1;
    b=0;
    c=1;
    scanf("%d",&e);
    while(a<e&&e<=40)
    {
        d=b+c;
        b=c;
        c=d;
        a++;
    }
    printf("%d\n",d);
    return 0;
}
