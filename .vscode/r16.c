#include<stdio.h>
int main()
{
int i = 1;
int n;
int sum=0;
printf("Enter your number\n");
scanf("%d", &n);
while (i<=n)
{
sum = sum + i; 
i++;

}
printf("%d", sum);


    return 0;
}    