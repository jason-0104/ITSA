#include<stdio.h>

int main()
{
    int first,second;
    scanf("%d%d",&first,&second);
    int a[first][first],b[second][second];

    for(int i=0;i<first;i++)
    {
        for(int j=0;j<first;j++)
            scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&first,&second);
    for(int i=0;i<first;i++)
    {
        for(int j=0;j<first;j++)
            scanf("%d",&b[i][j]);
    }
    int c[first][first];
     for(int i=0;i<first;i++)
    {
        for(int j=0;j<first;j++)
            {
                if(j==first-1)
                    printf("%d\n",a[i][j]+b[i][j]);
                else
                    printf("%d ",a[i][j]+b[i][j]);
            }
    }


}
