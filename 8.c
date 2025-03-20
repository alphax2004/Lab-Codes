#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    gets(a);
    int len=0;
    for(int i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("%d\n",len);

    gets(b);
    int length=strlen(b);
    printf("%d",length);
}