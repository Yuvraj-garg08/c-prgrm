#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("\n enter rows and coloumn of matrix \n");
    scanf("%d%d",&r,&c);
    printf("Enter elements of %d rows %d coloumn",r,c);
    for(i=0;i<r;i++)
    for(j=0;j<r;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    b[i][j]=a[j][i];
    printf("\n The original matrix is \n");
    for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",a[i][j]);
    printf("\n");
}
printf("\n Transpose matrix is \n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("%d\t",b[i][j]);
    printf("\n");
}
}