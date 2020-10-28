#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    int left=0,right=n-1,top=0,bottom=n-1,val=1;

    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            mat[top][i] = val++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            mat[i][right]=val++;
        }
        right--;
        for(int i=right;i>=left;i--)
        {
            mat[bottom][i] = val++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--)
        {
            mat[i][left] = val++;
        }
        left++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}