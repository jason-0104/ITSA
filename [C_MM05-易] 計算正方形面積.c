#include<stdio.h>

int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        double b =(int)((a*a * 10) + 0.5) / 10.0;
        printf("%0.1lf\n",b);
    }

}
