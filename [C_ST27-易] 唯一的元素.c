#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int total[num];
    int only[num];
    memset(only,0,num);

    int j=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&total[i]);
        if(!i)
            only[j++]=total[i];
        if(i>0)
        {
            if(total[i-1]!=total[i])
                only[j++]=total[i];
        }

    }
    for(int i=0;i<j;i++)
    {
        if(j-1==i)
            printf("%d\n",only[i]);
        else
            printf("%d ",only[i]);
    }
}
