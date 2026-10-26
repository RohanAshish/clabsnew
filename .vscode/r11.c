#include <stdio.h>
int main()
{
int a,b;
scanf("%d%d", & a,&b);
if (a>b)
printf("%d is greater" ,a);

else if (b>a)
printf("%d is greater ", b);

else 
printf(" %d & %d are equal", a,b);


    return 0;
}