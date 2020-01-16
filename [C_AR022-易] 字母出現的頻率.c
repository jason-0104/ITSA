#include<stdio.h>

int main()
{
    int a[26]={0};
    char ch;
     while((ch=getchar())!=EOF)
     {
         if(('a'<=ch && ch<='z'))
         {
             int i=ch-'a';
             a[i]++;
             continue;
         }
         if(('A'<=ch && ch<='Z'))
         {
            int i=ch-'A';
            a[i]++;
            continue;
         }
     }
     for(int i=0;i<26;i++)
        {
            if(i==25)
            {
                printf("%d\n",a[i]);
                break;
            }
            else
                printf("%d ",a[i]);
        }
return 0;

}
