#include<stdio.h>
#include<string.h>
int main()
{
    int a[100][100],rsum,csum,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        rsum=0;
        for(j=0;j<3;j++)
        {
            rsum=rsum+a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        csum=0;
        for(j=0;j<3;j++)
        {
            csum=csum+a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d",rsum);
    }
    for(j=0;j<3;j++)
    {
        printf("%d",csum);
    }

}
// Find the sum of rows an columns of a Matrix