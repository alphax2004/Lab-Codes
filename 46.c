#include<stdio.h>
#include<string.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,sum=0,r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][j]*a[j][k];
                c[i][j]=sum;
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}
// Write a program in C for the multiplication of two square matrices.