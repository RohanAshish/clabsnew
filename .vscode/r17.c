#include<stdio.h>
int main()
{
int i;
int n;
int sum=0;
printf("Enter your number\n");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
sum = sum + i;
}
printf("%d", sum);


    return 0;
}    