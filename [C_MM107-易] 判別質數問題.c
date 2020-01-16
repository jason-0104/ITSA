#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
    scanf("%d", &n);
    if(isprime(n))
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
    return 0;
}
int isprime(int n)
{
    if(n==1)
        return 0;
    int i=2;
    for(; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
