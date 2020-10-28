/*
Write a program to find the count of numbers which consists of unique digits.

Input:
Input consist of two Integer lower and upper value of an range

Output:
Output consists of single line, print the count of unique digits in given range. 
Else Print"No Unique Number"

Solution:

Input -
10
15
*/
#include<stdio.h>
int uniqueDigits(int num)
{
    int hash[10]={0};
    while(num!=0)
    {
        if(hash[num%10]==0)
        {
            hash[num%10] =1;
        }
        else
        {
            return 0;
        }
        num/=10;
        
    }
    return 1;
    
}
int main()
{
    int start,end,count=0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(uniqueDigits(i))
            count++;
    }
    printf("%d",count);
}