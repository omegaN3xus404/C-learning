#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    for(int i = 0; i>=10; i--)
    {
        printf("%d X %d = %d",a,i, a*i);
    }
}