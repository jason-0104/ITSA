#include<stdio.h>

int main()
{
    long long int n,r,k,n1=1,r1=1;

    scanf("%lld%lld",&n,&r);
    k=n-r;
    if(k>r)
    {
        long long int temp;
       temp=k;
        k=r;
        r=temp;

    }
    for( int i=r+1;i<=n;i++)
        n1*=i;
    for( int i=1;i<=k;i++)
        r1*=i;
    printf("%lld\n",(n1/r1));
}

