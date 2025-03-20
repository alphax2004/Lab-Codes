#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],l,l2,i,j=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
            j=i;
        }
    }
    l2=0;
    for(i=0;i<5;i++)
    {
        if(i==j)
        {
            i++;
            i--;
        }
        else
        {
            if(a[i]>l2)
            {
                l2=a[i];
            }
        }
    }
    printf("%d",l2);
    


}
// Write a program in C to find the second largest element in an array.