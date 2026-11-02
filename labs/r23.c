#include<stdio.h>
int main()
{
//int j,i;
int n, j,i;
printf("Enter your number\n");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
    printf("\n",i);
    for (j=1; j<=n; j++){
    

printf("*",j);
    }
}
    return 0;
}