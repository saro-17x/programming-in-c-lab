#include<stdio.h>
#include<conio.h>
void salaryhike(int *var,int b)
{
*var=*var+b;
}
void main()
{
int salary=0,bonus=0;
clrscr();
printf("enter the employee current salary:");
scanf("%d",&salary);
printf("enter bonus:");
scanf("%d",&bonus);
salaryhike(&salary,bonus);
printf("Final salary:%d",salary);
getch();
}
