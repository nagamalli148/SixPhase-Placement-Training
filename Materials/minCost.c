
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n], dp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    dp[0][0] = mat[0][0];
    for(int i=1;i<n;i++)
    {
        dp[0][i] = dp[0][i-1] + mat[0][i];
    }
    for(int i=1;i<m;i++)
    {
        dp[i][0] = dp[i-1][0] + mat[i][0];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(dp[i][j-1]<dp[i-1][j])
            {
                dp[i][j] = dp[i][j-1] + mat[i][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j] + mat[i][j];
            }
            
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
}