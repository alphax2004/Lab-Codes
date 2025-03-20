#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r,d,u;
        scanf("%d %d %d %d",&l,&r,&d,&u);
        if(l>0&&r>0&&d>0&&u>0)
        {
            if(l==r&&d==u&&r==d)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}