#include <stdio.h>
int main()
{

int b,f,p,p1,s,Burger,French,Pizza,Pasta,Sandwiches;
char ch,B,F,P,P1,S;
printf("b1=Burger\n2=French\n3=pizza\n4=Pasta1\n5=Sandwiches\n");
printf("Enter your order \nplease Enter the choice 1,2,3,4,5\n");
scanf("%d",&ch);
switch(ch)

{
case 1:
printf("your order is Burger\n");
printf("please enter your quantity ");

scanf("%d",&b);
Burger=129*b;

printf("your total charges is: %d",Burger);
break;

case 2:
printf("your order is French\n");
printf("please enter your quantity ");

scanf("%d",&f);
French=99*f;

printf("your total charges is: %d",French);
break;

case 3:
printf("your order is Pizza\n");
printf("please enter your quantity ");

scanf("%d",&p);
Pizza=239*p;

printf("your total charges is: %d",Pizza);
break;

case 4:
printf("your order is Pasta\n");
printf("please enter your quantity ");

scanf("%d",&s);
Pasta=129*s;

printf("your total charges is: %d",Pasta);
break;

case 5:
printf("your order is Sandwiches\n");
printf("please enter your quantity ");

scanf("%d",&s);
Sandwiches=149*s;

printf("your total charges is: %d",Sandwiches);
break;

default:
printf("invalid your choice");

break;
}
}
