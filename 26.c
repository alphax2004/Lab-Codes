#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int n,i,min=100,index=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        int len=strlen(a[i]);
        if(len<min)
        {
            min=len;
            index=i;

        }
    }
    puts(a[index]);

}
//Find the shortest string in an array of strings.