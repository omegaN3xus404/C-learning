#include<stdio.h>
int main()
{
int y;
printf("enter year");
scanf("%d",&y);
if(y%4==0 && y%100!=0 || y%400==0)
{
    printf("is leap year");
}
else{
    printf("not leap year");
}




}