#include<stdio.h>
#include<math.h>
int isPrime(int num)
{
    int z = sqrt(num);//Let us assume that the input is a prime number
    if(num<=1)
    {
        return 0;
    }
    if(num>3 && (num%2==0 || num%3==0))
    {
        return 0;
    }
    int k=1;
    int a = 6*k-1,b = 6*k+1;
    while(a <= z )
    {
        if(num%a==0 || num%b ==0)
        {
            return 0;
        }
        k++;
        a = 6*k-1;
        b= 6*k+1;
    }
    return 1; 
}
int main()
{
    int num;
    scanf("%d",&num);
    isPrime(num)==1?printf("Prime"):printf("Not a Prime");
}