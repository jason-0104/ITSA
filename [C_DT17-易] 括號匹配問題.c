#include <stdlib.h>
#include <stdio.h>
int main(){
 char ch;
 int iCount=0,isout=0;
 while(scanf("%c",&ch)!=EOF)
{
 if(ch=='(')
 iCount++;
 else if(ch==')')
 iCount--;
 if(iCount<0)
 isout = 1;
 }
 if(iCount!=0)
 printf("No\n");
 else if(isout==0)
 printf("Yes\n");
 else
 printf("No\n");
 return 0;
}
