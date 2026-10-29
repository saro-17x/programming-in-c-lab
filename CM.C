#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
clrscr();
printf("who is cm of tamil nadu");
printf("1.ajith\n 2.vijay\n 3.suriya\n 4.adhick\n");
scanf("%c",&choice);
switch(choice)
{
case 1:
printf("ajith cm of tamil nadu:%c\n");
break;
case 2:
printf("vijay cm of tamil nadu:%c\n");
break;
case 3:
printf("suriya cm of tamil nadu:%c\n");
break;
case 4:
printf("adhick cm of tamil nadu:%c\n");
break;
default:
printf("no one\n");
}
getch();
}