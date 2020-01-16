#include<stdio.h>

int main()
{
    int num_step,times,total;
    char a,b;
    scanf("%d%c%d%c%d",&num_step,&a,&times,&b,&total);
    int k=0;
    for(int i=0;i<num_step;i++)
    {
        int m=1;
        for(int j=1;j<=i;j++)
        {
           m*=times;
        }
        k+=m;
    }
    printf("%d\n",total/k);
}
