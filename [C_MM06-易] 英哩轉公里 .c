#include<stdio.h>

int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        double b =(int)((a* 1.6)*10 + 0.5) / 10.0;
        printf("%0.1lf\n",b);
    }

}
