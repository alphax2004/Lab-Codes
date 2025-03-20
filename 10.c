#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int space=0,tab=0,line=0;
    gets(a);
    for(int i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        {
            space++;
        }
        if(a[i]=='\t')
        {
            tab++;
        }
        if(a[i]=='\n')
        {
            line++;
        }
    }
    printf("%d %d %d ",space,tab,line);
}