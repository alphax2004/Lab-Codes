#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,pos=-1;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i+j]!=b[j])
            {
                break;
            }
        }
        if(b[j]=='\0')
        {
            pos=i+1;
        }
    }
    if(pos!=1)
    {
        printf("%d",pos);
    }
}