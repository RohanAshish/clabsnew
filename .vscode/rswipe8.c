#include<stdio.h>

int main()
{
int a=30, b=67, temp;
printf("value of a=%d and b=%d\n" ,a,b);
temp =a;
a=b;
b=temp;
printf("value of a=%d and b=%d\n" ,a,b);



    return 0;
}