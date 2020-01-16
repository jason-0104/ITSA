#include<stdio.h>

int main()
{
        int a;
        while(scanf("%lld",&a)!=EOF)
        {
             long long int b=1;
            for(int i=1;i<=a;i++)
                b*=i;
            printf("%lld\n",b);
        }
}
