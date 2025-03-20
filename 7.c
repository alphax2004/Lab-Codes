#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a[5][5],i,j,row,col;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                row=i+1;
                col=j+1;
            }
        }
    }
    int res=abs(row-3)+abs(col-3);
    printf("%d",res);
}