#include<stdio.h>

int main()
{
 int a;
 scanf("%d",&a);
 int result;
 //printf("%d",a%12);
 result=a%12;
 if(result==4)
    printf("rat\n");
 if(result==5)
    printf("ox\n");
 if(result==6)
    printf("tiger\n");
 if(result==7)
    printf("rabbit\n");
 if(result==8)
    printf("dragon\n");
 if(result==9)
    printf("snake\n");
 if(result==10)
    printf("horse\n");
 if(result==11)
    printf("sheep\n");
 if(result==0)
    printf("monkey\n");
 if(result==1)
    printf("rooster\n");
 if(result==2)
    printf("dog\n");
 if(result==3)
    printf("pig\n");


}
