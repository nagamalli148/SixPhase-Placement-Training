/*
Maximum no of ones
Write a function that should return the elements which have the maximum number
 of 1’s in its binary form. Input to the function is
the size of the array , array values and the number of elements to be returned. 
If two number is having same count then return the
elements with the greatest magnitude
Input :
5
5 3 7 1 2
2
Output
7 5
*/
#include<stdio.h>
void oneBit(int arr[],int n)
{
    int bits[n];
    for(int i=0;i<n;i++)
    {
        int x = arr[i],y=1,count=0;
        for(int j=0;j<32;j++)
        {
            if((x&y)!=0)
                count++;
            y = y<<1;
        }
        bits[i] = count;
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(bits[j]<bits[j+1])
            {
                temp = bits[j];
                bits[j] = bits[j+1];
                bits[j+1] = temp;

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    oneBit(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}