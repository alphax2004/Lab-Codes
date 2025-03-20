#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],b[100],c[100],x,y,z,temp,i,j,k;
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    z=x+y;
    for(i=0;i<x;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<y;j++)
    {
        c[i]=b[j];
        i++;

    }
    for(i=0;i<z;i++)
    {
        for(j=i+1;j<z;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }
    for(i=0;i<z;i++)
    {
        printf("%d",c[i]);
    }

}
//  Merge two arrays of same size sorted in decending order