#include<stdio.h>
int avrage(int,int,int);

int avrage(int x, int y, int z){
printf("avrage = %d",(x*y*z)/3);
}
int main()
{
int a=2, b =4,  c=6;
avrage(a,b,c);

}