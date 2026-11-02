#include<stdio.h>
int main()
{
    int a, b , c ;
    printf("enter your number\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("the numbers you entered are %d, %d, and %d", a, b, c);
    if(a>b && a>c)
    {
        printf("\n%d is the largest number", a);
    }
    else if(b>a && b>c)
    {
        printf("\n%d is the largest number", b);
        else 
    {
        printf("\n%d is the largest number", c);
    }
    return 0;
}