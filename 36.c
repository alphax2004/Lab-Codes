#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],temp[30];
    int i,j;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        int len=strlen(a);
        for(j=0,k=len-1;j<k;j++,k--)
        {
            temp=a[i][j];
            a[i][j]=a[j][k];
            a[j][k]=temp;
        }
        puts(a[i]);
    }

}
//  Reverse Each String in an Array
