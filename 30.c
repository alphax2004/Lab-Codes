#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],b[30][30];
    int i,j,k=0,found;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        found=0;
        for(j=0;j<k;j++)
        {
            if(strcmp(a[i],b[j])==0)
          {
            found=1;
            break;

          }

        }
        if(found==0)
        {
            strcpy(b[k],a[i]);
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        puts(b[i]);
    }
}
//Remove duplicate strings from an array of strings.