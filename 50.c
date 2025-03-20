#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        while(!((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')))
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            a[j]='\0';
        }
    }
    puts(a);

}
// Remove characters in String Except Alphabets