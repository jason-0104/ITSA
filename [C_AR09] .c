#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    char a[10],ch;
    int b[10];
    int i=0;
    while((ch=getchar())!=EOF)
    {
         if(ch==','||ch==' ')
            continue;

         a[i]=ch;
         b[i++]=ch-'0';
    }
    int c[i];
    for(int j=0;j<i;j++)
        c[j]=b[j];
    qsort(c, i, sizeof(int), cmpfunc);
    int big=0;
    int ten=1;
    for(int j=0;j<i; j++)
    {
        for(int k=0;k<j;k++)
            ten*=10;

            big+=c[j]*ten;
        ten=1;
    }
    int small=0;
    for(int j=i-1;j>=0; j--)
    {
        for(int k=0;k<i-j-1;k++)
            ten*=10;

            small+=c[j]*ten;
        ten=1;
    }
    int total=big-small;
    printf("%d\n",total);
return 0;

}
