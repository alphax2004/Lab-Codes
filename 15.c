#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    gets(a);
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    
    for(int i=0;i<len1;i++)
    {
        int found=0;
        for(int j=0;j<len2;j++)
        {
            if(a[i+j]==b[j])
            {
                found=1;
                break;
            }
        }
        if(found==1)
        {
            printf("%d ",i+1);
        }
    }
}