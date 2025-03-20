#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],pos,i;
    scanf("%d",&pos);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=pos;i<5;i++)
    {
        a[i]=a[i+1];

    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }


}