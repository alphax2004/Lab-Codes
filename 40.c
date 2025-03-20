#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],fre[100];
    int i,count,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        fre[i]=-1;
    }
    for(i=0;i<5;i++)
    {
        count=1;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fre[j]=0;
            }
        }
        if(fre[i]!=0)
        {
            fre[i]=count;
        }
    }
    for(i=0;i<5;i++)
    {
        if(fre[i]!=0)
        {
            printf("%d",fre[i]);
        }
    }

}
// Count the frequency of each element of an array