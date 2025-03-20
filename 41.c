#include<stdio.h>
#include<string.h>
int main()
{
     int a[100],b[100],c[100];
     int i,j=0,k=0;
     for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<5;i++)
     {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;

        }
        else
        {
            c[k]=a[i];
            k++;
        }
     }
     for(i=0;i<j;i++)
     {
        printf("%d ",b[i]);
     }
     printf("\n");
     for(i=0;i<k;i++)
     {
        printf("%d ",c[i]);
     }

}
// Separate odd and even integers in separate arrays