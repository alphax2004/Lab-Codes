#include<stdio.h>
int main()
{
    int w;
    printf("enter the no:");
    scanf("%d",&w);
    
    if(w%2==0 && w>2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
