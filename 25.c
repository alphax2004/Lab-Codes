#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int max=0,index=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        int len=strlen(a[i]);
        if(len>max)
        {
            max=len;
            index=i;
        }
    }
    puts(a[index]);


}
//Find the longest string in an array of strings.