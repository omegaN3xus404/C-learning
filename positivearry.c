#include<stdio.h>
int number=0;
int count(int a[],int n){
for(int i= 0;i<n;i++)
{
    
    if(a[i]>0)
    {
        number++;

    }
    
}
    return number;
}


int main()

{
int a[]={1,2,3,4,5};
printf("the positve numbers are %d",count(a,5));





}