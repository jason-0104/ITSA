#include<stdio.h>
#include <string.h>
char a[102];
char b[102];
char ch;
int main()
{
    int judge=0,judge_plus=0,i=0,j=0,t=0,k=0;
    memset(a,'\0',102);
    memset(b,'\0',102);
    scanf("%s",&a);
    scanf("%s",&b);
    for(k=0;k<102;k++)
    {
        if(a[k]!='\0')
            i++;
    }
    for(k=0;k<102;k++)
    {
        if(b[k]!='\0')
            j++;
    }
    for( k=0;k<j;k++)
    {
        for(t=0;t<i;t++)
        {
            if(a[t]==b[k])
            {
                judge_plus=1;
                k++;
            }

            else
                break;
        }
        if(t==i)
        {
            judge=1;
            break;
        }
        if(judge_plus)
            {
                k=k-1;
            }
        judge_plus=0;
    }
    if(i==0&&j==0)
    {
        printf("YES\n");
        return 0;
    }
    if(i!=0&&j==0)
    {
        printf("NO\n");
        return 0;
    }
    if(judge==1)
        printf("YES\n");
    else
        printf("NO\n");
}
