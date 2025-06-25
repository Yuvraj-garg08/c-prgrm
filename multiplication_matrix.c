#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,c2,r2;   
    printf("\nenter rows and coloumn of 1 matrix:");
    scanf("%d%d",&r1,&c1);
    printf("\n Enter rows and coloumn of 2nd matrix");
    scanf("%d%d",&r2,&c2);
    if(r2==c1)
    {
            printf("\n enter elements of 1 matrix");
            for(i=0;i<r1;i++)
                for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
             printf("\n Enter elements of 2nd matrix");
             for(i=0;i<r2;i++)
             for(j=0;j<c2;j++)
             scanf("%d",&b[i][j]);
             for(i=0;i<r1;i++)
             {
               for(j=0;j<c2;j++)
               {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
               }
            }
           printf("\n Product of two matrices is ..\n");
           for(i=0;i<r1;i++)
           {
            for(j=0;j<c2;j++)
              printf("%d\t",c[i][j]);
              printf("\n");
            }
    }
    else 
    printf("\n Matrix multiplication is not possible ");
    return 0;
}