#include <stdlib.h>
#include <stdio.h>
int main(){
 char ch;
 int iCount=0,isout=0;
 char a[30];
 scanf("%s",a);
 while(strcmp(a,"end")!=0)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]=='(')
        iCount++;
        else if(a[i]==')')
        iCount--;
        if(iCount<0)
        isout = 1;
        i++;
    }
 if(iCount!=0)
 printf("-1\n");
 else if(isout==0)
 printf("1\n");
 else
 printf("1\n");
 iCount=0,isout=0;
 scanf("%s",a);
 }
 return 0;

}
