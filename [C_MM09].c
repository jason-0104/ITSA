#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        long long int b=1;

        if(a<=31)
            {
                for(int i=0;i<a;i++)
                    b*=2;
                printf("%lld\n",b);
            }
        else
            printf("Value of more than 31\n");
    }


}
