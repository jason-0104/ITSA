#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int month[num],day[num];
    for(int i=0;i<num;i++)
        scanf("%d%d",&month[i],&day[i]);
    for(int i=0;i<num;i++)
    {

       if(month[i]==3)
       {
            if(day[i]>=21)
                printf("Aries\n");
            else
                printf("Pisces\n");
       }
       if(month[i]==4)
       {
            if(day[i]>=20)
                printf("Taurus\n");
            else
                printf("Aries\n");
       }
       if(month[i]==5)
       {
            if(day[i]>=21)
                printf("Gemini\n");
            else
                printf("Taurus\n");
       }
       if(month[i]==6)
       {
            if(day[i]>=22)
                printf("Cancer\n");
            else
                printf("Gemini\n");

       }
       if(month[i]==7)
       {
            if(day[i]>=23)
                printf("Leo\n");
            else
                printf("Cancer\n");
       }
       if(month[i]==8)
       {
            if(day[i]>=23)
                printf("Virgo\n");
            else
                printf("Leo\n");
       }
       if(month[i]==9)
       {
            if(day[i]>=23)
                printf("Libra\n");
            else
                printf("Virgo\n");
       }
       if(month[i]==10)
       {
            if(day[i]>=23)
                printf("Scorpio\n");
            else
                printf("Libra\n");
       }
       if(month[i]==11)
       {
            if(day[i]>=24)
                printf("Sagittarius\n");
            else
                printf("Scorpio\n");
       }
       if(month[i]==12)
       {
            if(day[i]>=23)
                printf("Capricorn\n");
            else
                printf("Sagittarius\n");
       }
       if(month[i]==1)
       {
            if(day[i]>=22)
                printf("Aquarius\n");
            else
                printf("Capricorn\n");
       }
       if(month[i]==2)
       {
            if(day[i]>=20)
                printf("Pisces\n");
            else
                printf("Aquarius\n");
       }

    }

}
