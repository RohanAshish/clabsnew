#include<stdio.h>
int main()
{
// meko ek factorial walli code dedo jisse kissi number ka factorial nikala ja sake
int n, i;
int factorial = 1;
printf("Enter a number: ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
factorial *= i;
}
printf("Factorial of %d is %d\n", n, factorial);






    return 0;
}