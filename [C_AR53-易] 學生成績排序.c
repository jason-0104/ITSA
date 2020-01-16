#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int num;
    scanf("%d",&num);
    int score[num];
    for(int i=0;i<num;i++)
        scanf("%d",&score[i]);
    qsort(score, num, sizeof(int), cmpfunc);
    for(int i=0;i<num;i++)
            printf("%d\n",score[i]);

}
