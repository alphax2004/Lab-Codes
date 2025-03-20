#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int i,j,k,pal;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        int len=strlen(a[i]);
        pal=1;
        for(j=0,k=len-1;j<k;j++,k--)
        {
            if(a[i][j]!=a[j][k])
            {
                pal=0;
                break;
            }
        }
        
    }
    if(pal==1)
        {
            puts("yes");
        }
        else
        {
            puts("no");
        }

}
// Check if All Strings in the Array are Palindromes