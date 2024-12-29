#include<stdio.h>
int main()
{
int value[5];
printf("enter the value");
for(int i=0;i<5;i++)
{
        scanf("%d",&value[i]);
}
for(int i = 0;i<5;i++)
{
    printf("the index is %d and the value is %d\n",i,value[i]);
}


}