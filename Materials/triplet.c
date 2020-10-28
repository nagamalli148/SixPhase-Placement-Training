/*
Form Triangle
Find the number of all possible triplets in the array that can form the triangle
( condition is a+b>c) .
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k] >arr[i])
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
            }
        }
    }
}
    