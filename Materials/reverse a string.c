#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    int n = strlen(str);

    for(int i=n-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            printf("%s ",&str[i+1]);
            str[i] = '\0';
        }
    }
    printf("%s",&str[0]);

}