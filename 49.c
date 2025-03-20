#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],res=0;
    gets(a);
    int fre[100]={0},max=0,len=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        fre[a[i]]++;
    }
    for(i=0;i<len;i++)
    {
        if(max<fre[a[i]])
        {
            max=fre[a[i]];
            res=a[i];
        }
    }
    printf("%c",res);

}
//  Write a program in C to find the maximum number of characters in a string.