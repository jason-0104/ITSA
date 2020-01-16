int gcd(int x, int y)
{
    int tmp;
    while (x % y != 0)
    {
        tmp = y;
        y = x % y;
        x = tmp;
    }
    return y;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=gcd(a,b);
    printf("%d\n",c);
}
