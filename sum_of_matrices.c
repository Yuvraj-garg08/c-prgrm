#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],s[10][10],r,c,i,j;
    printf("\n Enter rows and coloumn of 2 matrices");
    scanf("%d%d",&r,&c);
    printf("\n enter elemets of first matrices");
    for(i=0;i<r;i++)
    {
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);
    }
    printf("\n Enter elements of 2 matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
                 s[i][j]=a[i][j]+b[i][j];
    }
    printf("\n sum of two matrices is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",s[i][j]);
        printf("\n");
    }
    }
