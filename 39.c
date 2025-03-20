#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],count,i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;j<5;j++)
        {
            
            if(i!=j&&a[i]==a[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d",a[i]);
        }
    }

}
// Print all unique elements of an array