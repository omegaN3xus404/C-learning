#include<stdio.h>
int main()
{
    
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b;
printf("enter the number you want to get multipcation of to 10");
scanf("%d",&b);
for(int i =0;i<10;i++)
{
        a[i]=b*(i+1);

printf("%d\n",a[i]);
}


}
}