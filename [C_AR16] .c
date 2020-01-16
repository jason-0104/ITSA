#include<stdio.h>
#include <string.h>
char a[9]={'\0'};
char b[3][9]={'\0'};
int total=0,money[6]={200000,40000,10000,4000,1000,200};special=0,num_money[6]={0};
char ch;
int main()
{
    int num_invoice;

    scanf("%s",a);
    for(int i=0;i<3;i++)
        scanf("%s",b[i]);
    scanf("%d ",&num_invoice);
    char exchange[num_invoice][9];
    for(int i=0;i<num_invoice;i++)
    {
        for(int j=0;j<9;j++)
           exchange[i][j]='\0';
    }
    for(int i=0;i<num_invoice;i++)
        scanf("%s",exchange[i]);
    for(int i=0;i<num_invoice;i++)
    {
        if(!memcmp(exchange[i],a,9))
         {
            total+=2000000;
            special++;
         }
   }
   printf("%d ",special);
   int min=10;
   int j,final_=0;
   int compare[3]={-1},count=0,have_exchanged=0;
   for(int i=0;i<num_invoice;i++)
   {
       have_exchanged=0;
       for(int k=0;k<3;k++)
       {
           if(!memcmp(a,b[k],9))
                {
                    compare[count++]=9;
                    continue;
                }
            if(!memcmp(a,exchange[i],9))
            {
                have_exchanged=1;
                break;
            }
           for(j=7;j>=0;j--)
            {
                 if(exchange[i][j]==b[k][j])
                     continue;
                 else
                    break;
            }
            j++;
            compare[count]=j;
            count++;

        }
        if(have_exchanged==1)
            continue;
        for(j=0;j<3;j++)
        {
            if(compare[j]<min&&compare[j]<=5)
                min=compare[j];
        }
        if(min!=10)
        {
            total+=money[min];
            num_money[min]++;
        }
        for(j=0;j<3;j++)
           compare[j] =-1;
        min=10;
        count=0;

   }

    for(int i=0;i<6;i++)
    {
        if(i==5)
            printf("%d\n",num_money[i]);
        else
            printf("%d ",num_money[i]);
    }
    printf("%d\n",total);


}
