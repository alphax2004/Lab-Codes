#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int i,j,count=0;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        {
            count++;
        }
    }
    printf("%d",count);

}
//Count the total number of characters across all strings in an array