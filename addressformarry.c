#include<stdio.h>
int main()
{

    int value[5];
    printf("enter the values");

    for(int i = 0; i<5;i++)
    {
        scanf("%d",&value[i]);
    }
    for(int i = 0;i<5;i++)
    {
        printf("the addres is %d and the value is %u\n",i ,&value[i]);
    }
}