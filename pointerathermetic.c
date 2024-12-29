#include<stdio.h>
int main()
{
    int a=2;
    printf("the adress of a is %u\n",&a);

    // this saves the value adress of a
    int *value=&a;
    printf("the value %u",value);


}