#include<stdio.h>
int main()
{
   int a;

   scanf("%d",&a);
   int temp=0;
   int b[4];
   b[0]=((((a-a%1000)/1000)+7)%10);
   a=(a%1000);
   b[1]=((((a-a%100)/100)+7)%10);
   a=(a%100);
   b[2]=((((a-a%10)/10)+7)%10);
   a=(a%10);
   b[3]=(((a-a%1)+7)%10);
   temp=b[0];
   b[0]=b[2];
   b[2]=temp;
   temp=b[1];
   b[1]=b[3];
   b[3]=temp;
   for(int i=0;i<4;i++)
   {
       printf("%d",b[i]);
   }
   printf("\n");


}
