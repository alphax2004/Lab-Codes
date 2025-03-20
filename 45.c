#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],m,m2,i,j=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    m=9;
    for(i=0;i<5;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
            j=i;
        }
    }
    m2=9999;
    for(i=0;i<5;i++)
    {
        if(i==j)
        {
            i++;
            i--;
        }
        else
        {
            if(a[i]<m2)
            {
                m2=a[i];
            }
        }
    }
    printf("%d",m2);

}
//  Find the second smallest element in an array