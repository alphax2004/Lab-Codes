#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int found=0,i,j;
    int len1=strlen(a);
    int len2=strlen(b);
    if(a[len1-1]=='\n')
    {
        a[len1-1]='\0';

    }
    if(b[len2-1]=='\n')
    {
        b[len2-1]='\0';
    }
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;b[j]!='\0';j++)
        {
            if(a[i+j]!=b[j])
            {
                break;
            }
        }
        if(b[j]=='\0')
        {
            found=1;
            break;
        }
    }
    if(found==0)
    {
        puts("not found");
    }
    else{
        puts("found");
    }
    
}