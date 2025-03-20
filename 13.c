#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    gets(a);
    
        if(a[0]>='a'&&a[0]<='z')

        {
                a[0]-=32;
           
        }
    
    for(i=0;a[i]!=0;i++)
    {
        if((a[i-1]==' '||a[i-1]=='\n'||a[i-1]=='\t')&&a[i]>='a'&&a[i]<='z')

        {
                a[i]-=32;
           
        }
    }
    puts(a);
}