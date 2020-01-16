#include<stdio.h>

int main()
{
    char ch;
    int total=0;
    while((ch=getchar())!=EOF)
    {
        if(ch==' ')
            continue;

        if(ch=='A')
            total+=14;
        if(ch=='J')
            total+=11;
        if(ch=='Q')
            total+=12;
        if(ch=='K')
            total+=13;
        if(ch=='1')
        {
            ch=getchar();
            if(ch==' ')
                total+=1;
            if(ch=='0')
                total+=10;
        }
        if(ch>='2'&&ch<='9')
            total+=(ch-'0');

    }
    printf("%d\n",total);
}
