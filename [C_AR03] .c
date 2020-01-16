#include<stdio.h>

int main()
{
    int total=0;
    int a[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=5;i>=0;i--)
    {
        total+=a[i]*a[i]*a[i];
    }
    printf("%d\n",total);
}
