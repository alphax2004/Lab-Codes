#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],b[30];
    int i,n,found=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    gets(b);
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        puts(b);
    }
    else{
        printf("not found");
    }
    
}
