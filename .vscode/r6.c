/*
ek c program likho jo user se uski exam ke marks le aur uski grade batye jisme ("0=<marks<=100")
tak honge aur uski reading ke according answer denge
mark>= 90 ; print - grade a 
marks >= 75 and <90 ; print - grade b 
marks >= 50 and <75 ; print - grade c 
marks <50  print grade fail 
*/

#include <stdio.h>
int main()
{
int marks;
printf("Enter your marks:\n");
scanf("%d", &marks);
if(marks>=90)
{
    printf("grade A\n");
}
else if (marks>=75 && marks<90)
{
    printf("grade B\n" );
}
else if(marks >=50 && marks < 75)
{
    printf("grade c\n");
}
else 
{
    printf("grade f fail\n");
}

    return 0;
}