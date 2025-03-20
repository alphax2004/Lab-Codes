#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]!='y'&&a[i]!='Y')
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
            printf(".%c",a[i]);
    
            
        }
    } 
    
   
}