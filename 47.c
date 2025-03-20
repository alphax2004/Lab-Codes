#include<stdio.h>
#include<string.h>
int main()
{
    int a[100][100],i,j,found=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((i==j&&a[i][j]!=1)||(i!=j&&a[i][j]!=0))
            {
                found=1;
                break;
        
            }
        }
    }
    if(found==0)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",a[i]);
            }
        }
    }
    else
    {
        printf("invalid");
    }


}
// C program to check Identity matrix