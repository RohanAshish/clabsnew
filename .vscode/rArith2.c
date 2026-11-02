#include <stdio.h>
int  main()
{
int a,b;
int  op;
printf("Enter two number\n");
scanf("%d %d", &a,&b);
printf("which operator you want to perform\n");
printf("1+,2-,3*,4/");
scanf("%d", &op);
switch(op)
      {
    case 1:
    printf("Result= %d\n", a+b);
   break;
    case 2:
    printf("Result= %d\n",a-b);
     break;
    case 3:
    printf("Result= %d\n", a*b);
    break;
    case 4:
    if (b==0)
    {
    printf("division by zero is not possible\n");
    
    }
    else
    {
    printf("Reslut=%d\n", a/b);
    
    }
   break;
   default:
   printf("invalid operator");















   
    }
    return 0;
}