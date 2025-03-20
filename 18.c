#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],result[100];
    int pos,len,i;
    gets(a);
    scanf("%d %d",&pos,&len);
    for(i=0;i<len&&a[i]!='\0';i++)
    {
        result[i]=a[pos+i-1];
    }
    result[i]='\0';
    puts(result);
}