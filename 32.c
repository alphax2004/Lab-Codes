#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    puts(a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        
        if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u'||a[i]!='A'||a[i]!='E'||a[i]!='I'||a[i]!='O'||a[i]!='U')
        {
            if(a[i]>='A'&&a[i]<='B')
            {
                a[i]=a[i]+32;
            }
    
            
        }
    } 
    printf(".%c",a);
   
}