#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9};
int* ptr=a;
printf("the addres of the %u is %d",&ptr+2,*(ptr+2));

}