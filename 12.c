#include<stdio.h>
#include<string.h>
int main()
{
    int ch=0,word=0;
    char a[100];
    gets(a);
    for(int i=0;a[i]!=0;i++)
    {
        if(a[i]!=' '&&a[i]!='\n'&&a[i]!='\t')
        {
            ch++;
        }
        if(a[i-1]==' '||a[i-1]=='\n'||a[i-1]=='\t')
        {
            word++;
        }
    }
    printf("%d %d",ch,word);
}