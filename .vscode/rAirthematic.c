#include <stdio.h>
int main()
/*{
    int a,b;
    int op;
printf("Enter two number\n");
scanf("%d %d", &a, &b);
printf("which operator you want to perform\n");
printf("1+,2-,3*,4/\n");
scanf("%d",&op);
switch(op)
{
case 1:
printf("Result = %d\n", a+b);
break;
case 2:
printf("Result = %d\n", a-b);
break;
case 3:     
printf("Result = %d\n", a*b);
break; 
case 4:
if(b==0)
{
printf("Division by zero is not allowed\n");
} 
else{ 
printf("Result = %d\n", a/b);
break;       
} 

}
return 0;
}*/
/* ha ab isme dhyan se suno upar humne int op; liya hai isliye is code me thodi specification hai wo bata rhe hai
sabse phle humne 2 int a and b le lie then hume ek hi code mei chaaro operator use krna tha isliye ab humne is kaam ke liye
swith case ka use kra
ab humne scanf op par use kra hai isliye 
uske baad switch(op) kra hai (ab dhyan se waha humne int op liya tha isliye case 1: likhne me 1ko asise 
comma lagake '1' nahi likha humne  otherwise agar char op rehta tho hume '1' likhna padta (nahi to error aata)
 but ab humne int op liya hai isliye case 1: likhne*/

{
 int day;
 printf("Enter your day\n");
 scanf("%d", &day );
  
 switch(day)
 {
  case 1:
  printf("your day is monday\n");
break;
  case 2:
  printf("your day is tuesday\n");
break;
  case 3:
  printf("your day is wednesday\n");
  break;
  case 4:
  printf("your day is thursday\n");   
case 5:
  printf("your day is friday\n");
  break;
  case 6:
  printf("your day is saturday\n");
  break;
  case 7:
  printf("your day is sunday\n");
  break;
 
default:
printf("bhai bhai apne galat din dallla hai isse sahi kro hafte mei bas 7 din hote hai yaar\n");
 }




 
return 0;
}