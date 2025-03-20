#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],ch;
    gets(a);
   
    scanf("%c",&ch);
     int flag=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            printf("%c",ch);
             break;
        }
       
    }
    

}