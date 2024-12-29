#include<stdio.h>
int main()
{
int arr[3][2];

for(int i = 0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("enter the value of arry[%d] and [%d]",i,j);
        scanf("%d",&arr[i][j]);
    }    
}
for(int i =0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("enter the value of arry[%d] [%d] %d\n",i,j,arr[i][j]);
        
    }    
}

}