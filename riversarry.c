#include<stdio.h>

void printarry(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void revers(int a[], int n)
{
    int temp;
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
        
    }
}

int main()
{
int a[]={1,2,3,4,5,6};
printarry(a,6);
revers(a,6);
printarry(a,6);
}

