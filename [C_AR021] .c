#include<stdio.h>

int main()
{
    int num_std;
    scanf("%d",&num_std);
    double score[num_std][3];
    for(int i=0;i<num_std;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%lf",&score[i][j]);
    }
    double average[3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<num_std;j++)
            average[i]+=score[j][i];

         average[i]=average[i]/num_std;
         average[i] =(int)((average[i] * 10) + 0.5) / 10.0;
    }
    double total;
    for(int i=0;i<3;i++)
        total+=average[i];
    printf("%0.1f ",total/3);
    for(int i=0;i<3;i++)
    {
        if(i==2)
            printf("%0.1f\n",average[i]);
        else
            printf("%0.1f ",average[i]);
    }




}
