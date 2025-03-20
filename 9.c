#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    gets(a);
    for(int i=0;a[i]!=0;i++)
    {
        
        b[i]=a[i];
        
    }
    puts(a);
    puts(b);

    char c[100],d[100];
    gets(c);
    strcpy(d,c);
    puts(c);
    puts(d);
}