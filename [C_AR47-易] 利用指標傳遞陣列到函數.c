#include<stdio.h>
int b[10];
void reverse(int *a)
{
    for(int i=9, j=0;i>=0;i--,j++)
        b[j]=a[i];

}
void display(int *a)
{
     for(int i=0;i<10;i++)
        {
            if(i!=9)
            printf("%d ",a[i]);
            else
            {
                printf("%d\n",a[i]);
            }
        }
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a);
    display(b);


}
