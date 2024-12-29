#include<stdio.h>
int main()
{
    int a=10;
    int prime = 0;
    for(int i = 2; i<a; i++)
    {
        if(a%i==0)
        {
            prime = 1;
        }
        if(prime)
        {
            printf("not\n");
        }
        else{
            printf("is\n ");
            
        }
    }

}