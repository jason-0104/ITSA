#include <stdio.h>
int read_expr( int type[], int integers[], char symbols[][3])
{
    char ch;
    int i=0,token=0,num=0;
     while((ch=getchar())!='e')
     {
          if(ch==' '||ch=='\t'||ch=='\r')
        {
            num=0;
            continue;
        }
         if(ch=='\n')
       {
            symbols[i][0]='\n';
            symbols[i][1]='\0';
            type[i]=1;
            token++;
            return token;
       }
          if(ch>='0' && ch<='9')
         {
             if(num==0)
             {
                type[i]=0;
                integers[i]=ch-'0';
                num =1;
                token++;
             }
              else
            {
                i--;
                integers[i] = integers[i]*10 + (ch-'0');
            }

        }
           else
            {
                if(ch=='='||ch=='!'||ch=='&'||ch=='|')
                    {
                    if(symbols[i-1][0]=='='||symbols[i-1][0]=='&'||symbols[i-1][0]=='|'||symbols[i-1][0]=='!')
                        {
                            i--;
                            symbols[i][1]=ch;
                            symbols[i][2]='\0';
                            i++;
                            continue;
                        }
                    }
            type[i]=1;
            symbols[i][0]=ch;
            symbols[i][1]='\0';
            token++;
            num = 0;
           }
        i++;
    }
  return 0;
}
int main()
{
    int token_count,i,result=0;
    int type[10000],integers[10000];
    char symbols[100000][3];
    while( token_count = read_expr(type, integers, symbols) )
    {
        for(i=0;i<token_count;i++)
        {
            if(type[i]==1)
            {
                int finding_front=i,finding_back=i;
                if(symbols[i][0]=='*')
                {
                   while(type[finding_front]!=0)
                   {
                       finding_front++;
                   }
                   while(type[finding_back]!=0)
                   {
                       finding_back--;
                   }
                 integers[i]=integers[finding_back]*integers[finding_front];
                 type[finding_front]=2;
                 type[finding_back]=2;
                 type[i]=0;
                 result=integers[i];
                 i=0;
                }
                if(symbols[i][0]=='/')
                {
                    while(type[finding_front]!=0)
                   {
                       finding_front++;
                   }
                   while(type[finding_back]!=0)
                   {
                       finding_back--;
                   }
                 integers[i]=(integers[finding_back]/integers[finding_front]);
                 type[finding_front]=2;
                 type[finding_back]=2;
                 type[i]=0;
                 result=integers[i];
                 i=0;
                }
            }
        }
       for(i=0;i<token_count;i++)
        {
            if(type[i]==1)
            {
                int finding_front=i,finding_back=i;
                if(symbols[i][0]=='+')
                {
                   while(type[finding_front]!=0)
                   {
                       finding_front++;
                   }
                   while(type[finding_back]!=0)
                   {
                       finding_back--;
                   }
                 integers[i]=integers[finding_back]+ integers[finding_front];
                 type[finding_front]=2;
                 type[finding_back]=2;
                 type[i]=0;
                 result=integers[i];
                 i=0;
                }
                if(symbols[i][0]=='-')
                {
                    while(type[finding_front]!=0)
                   {
                       finding_front++;
                   }
                   while(type[finding_back]!=0)
                   {
                       finding_back--;
                   }
                 integers[i]=(integers[finding_back]-integers[finding_front]);
                 type[finding_front]=2;
                 type[finding_back]=2;
                 type[i]=0;
                 result=integers[i];
                 i=0;
                }
              }
          }
    printf("%d\n",result);
}
return 0;
}



