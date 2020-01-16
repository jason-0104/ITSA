#include<stdio.h>

int main()
{
    int n,m;
    int judge=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%d\n",a[j][i]);
                    break;
                }
                printf("%d ",a[j][i]);
            }
    }
}
