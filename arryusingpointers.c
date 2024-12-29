#include<stdio.h>
int main()
{
int marks[]={2,3,4,5};
// saves the addres of the first array
int ptr=&marks[0];
// same as int *ptr=&marks[0];
// int *ptr=marks;
for(int i=0; i<4;i++)
{
    printf("the index and address are %d %u\n",i,&marks[i]);
}


}