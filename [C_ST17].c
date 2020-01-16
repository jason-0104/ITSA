#include<stdio.h>
#include<stdlib.h>
int main()
{

   long long int a,b,c;
    scanf("%lld",&a);
    while(a!=0)
    {c=a;
     b=0;
        while(a!=0)
           {
               b=b*10+a%10;  a=a/10;
           }
           if(c==b)
                printf("YES\n");
           else
                printf("NO\n");

           scanf("%lld",&a);
           b=0;
        }
    system("pause");
    return 0;

}
