#include<stdio.h>



int first(long long int *a)
{
    long long int max=0;
    int id;
    for(int i=0;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            id=i;
        }
    }
    return id;
}
int last(long long int *a)
{
    long long int min=9223372036854775807;
    int id;
    for(int i=0;i<3;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            id=i;
        }
    }
    return id;
}
int main()
{

    long long int all[3];
    while(scanf("%lld",&all[0])!=EOF)
    {
        scanf("%lld%lld",&all[1],&all[2]);
        int mark[3]={0};
        int rank[3]={0};


        rank[0]=last( all );
        rank[2]=first( all );
        mark[rank[0]]=1;
        mark[rank[2]]=1;
        for(int i=0;i<3;i++)
        {
            if(mark[i]!=1)
            {
                rank[1]=i;
                mark[i]=1;
                break;
            }
        }
        if(all[rank[0]]+all[rank[1]]>all[rank[2]])
        {
            if(rank[1]==0)
                printf("A\n");
            else if(rank[1]==1)
                printf("B\n");
            else if(rank[1]==2)
                printf("C\n");

        }
        else
        {
            if(rank[2]==0)
                printf("A\n");
            else if(rank[2]==1)
                printf("B\n");
            else if(rank[2]==2)
                printf("C\n");
        }
    }

}
