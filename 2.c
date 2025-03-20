#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    
    
        char a[100];
       
        int i;
        while(n--)
        {
          scanf("%s",a);
          int len=0;
          while(a[len]!='\0')
          {
            len++;
          }
          a[len]='\0';
        if(len>10)
        {
               printf("%c%d%c",a[0],len-2,a[len-1]);
        }
        else
        {
            printf("%s",a);
        }
        printf("\n");
       
        }

    
}
          

