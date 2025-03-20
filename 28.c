#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],b[30];
    int i,found=0;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strlen(a[i])==strlen(b)&&(strcmp(a[i],b)==0))
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        puts(b);
    }
    else
    {
        puts("no");
    }

}
//Check if a specific string is present in an array of strings