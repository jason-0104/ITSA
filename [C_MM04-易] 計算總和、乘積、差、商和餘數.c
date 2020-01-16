#include<stdio.h>

int main()
{
    int a,b,r;
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a>0)
        printf("%d/%d=%d...%d\n",a,b,a/b,(a%b));
    else
    {
        int q = a/b;
		if (q < 0)
			q--;
		else if(q>=0)
			q++;

		r=a-b*q;
		 printf("%d/%d=%d...%d\n",a,b,q,r);
    }

}
