#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int pos,valu,i,j;
    scanf("%d",&valu);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(valu<a[i])
        {
            pos=i;
            break;
        }
        else
        {
            pos=i+1;
        }
    }
    for(i=5;i>=pos;i--)
    {
        a[i+1]=a[i];

    }
    a[pos]=valu;
    for(i=0;i<=5;i++)
    {
        printf("%d",a[i]);
    }

}
//  Insert New value in the array (sorted list )