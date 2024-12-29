#include <stdio.h>
int main()
{
int s, tax;
printf("enter salry");
scanf("%d",&s);
if(s<250000) 
{
tax = 0;
}
else if(s>250000 && s<=500000)
{
tax = 0.05*(s-250000);
}
else if(s>500000 && s<=800000)
{
tax = 0.20*(s-500000);
}

printf("%d",tax);






}