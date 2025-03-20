#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],temp[30];
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    int pos1,pos2;
    scanf("%d %d",&pos1,&pos2);
    strcpy(temp,a[pos1-1]);
    strcpy(a[pos1-1],a[pos2-1]);
    strcpy(a[pos2-1],temp);
    for(i=0;i<n;i++)
    {
        puts(a[i]);
    }
}