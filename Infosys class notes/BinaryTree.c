#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0,level=0,sum=0,max = INT_MIN;
    while(i<n)
    {
        sum=0;
        for(int j=i;j<i+pow(2,level) && j<n;j++)
        {
            sum = sum + arr[j];
        }

        if( sum > max)
            max = sum;

        i = i + pow(2,level);
        level++;
    }
    printf("%d",max);

}