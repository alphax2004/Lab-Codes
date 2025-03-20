#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],res[30];
    int i,j,k;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j]!=0;j++)
        {
            res[k]=a[i][j];
            k++;
        }
    }
    res[k]='\0';
    puts(res);
    
}
//Concatenate all strings in an array to form one large string.