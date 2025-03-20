#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    char a[5];
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[1]='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n",x);
    
    
         
    
}