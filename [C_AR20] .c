#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int num;
    scanf("%d ",&num);
    int a[num];
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
    qsort(a, num, sizeof(int), cmpfunc);
    int judge=1;
     for(int i=0;i<num;i++)
     {
        if(i==num-1)
            continue;
        else
        {
            if(a[i]==a[i+1])
            {
                judge=0;
                break;
            }
        }
    }
    printf("%d\n",judge);

}
