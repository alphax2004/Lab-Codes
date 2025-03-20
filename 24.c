#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],temp[30];
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k=0;
            while(a[i][k]==a[j][k]&&a[i][k]!='\0'&&a[j][k]!='\0')
            {
                k++;
            }
            if(a[i][k]>a[j][k])
            {
                for(k=0;a[i][k]!=0;k++)
                
                {
                    temp[k]=a[i][k];
                }
                temp[k]='\0';
                for(k=0;a[j][k]!=0;k++)
                {
                    a[i][k]=a[j][k];
                }
                a[i][k]='\0';
                for(k=0;temp[k]!=0;k++)
                {
                    a[j][k]=temp[k];
                }
                a[j][k]='\0';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        puts(a[i]);
    }

}
//Sort an array of strings in alphabetical order.