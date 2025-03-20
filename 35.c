#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30];
    int i,count=0;
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i][0]=='a'||a[i][0]=='e'||a[i][0]=='i'||a[i][0]=='o'||a[i][0]=='u'||a[i][0]=='A'||a[i][0]=='E'||a[i][0]=='I'||a[i][0]=='O'||a[i][0]=='U'||)
        {
            count++;
        }
    }
    printf("%d",count);

}
//Count the Number of Strings Starting with a Vowel