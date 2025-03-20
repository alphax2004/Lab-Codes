#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int i,j,max=0,index=0,count;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0,a[i][j]!='\0';j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u'||a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='U')
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            index=i;
        }

    }
    puts(a[index]);

}
// Find the String with the Maximum Vowels