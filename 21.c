#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        int len=strlen(a[i]);
        printf("%d\n",len);
    }
}