#include<stdio.h>
int main()
{
    int a[]={10, 20, 4, 45, 99, 45};
    int max;
    for(int i=0;i<6;i++)
    {
        if(a[i]>max){
            max=a[i];
            printf("%d\n",max);
        }
    }
}