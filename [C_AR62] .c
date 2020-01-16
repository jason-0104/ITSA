#include<stdio.h>

int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    }
    int row_1,column_1;
    scanf("%d %d",&row_1,&column_1);
    int b[row_1][column_1];
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<column_1;j++)
            scanf("%d",&b[i][j]);
    }
    int c[row*column_1];
    int total=0;
    int t=0;
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<column_1;k++)
        {
            for(int j=0;j<column;j++)
                {
                    total+=a[i][j]*b[j][k];
                }
            c[t++]=total;
            //printf("%d ",total);
            total=0;
        }
    }
    t=0;
    int d[row][column_1];
    for(int i=0;i<row;i++)
    {
         for(int j=0;j<column_1;j++)
            d[i][j]=c[t++];
    }
    for(int i=0;i<row;i++)
    {
         for(int j=0;j<column_1;j++)
            {
                if(j==column_1-1)
                    printf("%d\n",d[i][j]);
                else
                    printf("%d ",d[i][j]);
            }

    }







}
