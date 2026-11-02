#include <stdio.h>
int main()
{ 
int n,i;
printf("Enter your number\n");
scanf("%d", &n);
printf("your even numbers are");
for (i=2; i<=n; i=i+2)
{
    printf("%d\n", i);
    
}
printf("Your odd numbers are\n");
for(i=1; i<=n; i=i+2)
{
    printf("%d\n", i);
}


    return 0;
}