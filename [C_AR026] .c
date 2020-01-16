#include<stdio.h>
typedef struct point *pointer;
typedef struct point{
    pointer next;
    int data;
};
pointer element;

int main()
{
    element=malloc(sizeof(*element));
    element->next=NULL;
    int k,num=0;
    while(scanf("%d",&k)!=EOF)
    {
        pointer temp;
        temp=malloc(sizeof(*temp));
        num++;
        temp->data=k;
        temp->next=element->next;
        element->next=temp;
    }
    //printf("%d ",num);
    pointer count;
    count=malloc(sizeof(*count));
    count=element->next;
    int total[num],num_1=num;
    while(count!=NULL)
    {
        total[num_1-1]=count->data;
        count=count->next;
        num_1--;
    }
    for(int i=0;i<num;i++)
        {
            if(i==num-1)
               printf("%d\n",total[i]);
            else
                printf("%d,",total[i]);
        }
    int large=0;
    for(int i=0;i<num;i++)
    {
        int have_sort=0;
        int big=total[i];
        large=0;
        for(int j=i+1;j<num;j++)
        {
            if(total[j]>big)
            {
                big=total[j];
                large=j;
                have_sort=1;
            }
        }
        if(have_sort)
        {
            int temp=total[large];
            total[large]=total[i];
            total[i]=temp;
        }
        else
            continue;
        for(int i=0;i<num;i++)
            {

                if(i==num-1)
                    printf("%d\n",total[i]);
                else
                    printf("%d,",total[i]);
            }
    }



}
