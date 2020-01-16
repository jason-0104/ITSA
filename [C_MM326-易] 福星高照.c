#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d",&b);
        int c=((a*31)+b)%5;
        if(c==0)
            printf("terrible\n");
        else if(c==1)
            printf("bad\n");
        else if(c==2)
            printf("common\n");
        else if(c==3)
            printf("good\n");
        else if(c==4)
            printf("great\n");

    }
}
