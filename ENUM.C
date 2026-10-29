#include<stdio.h>
#include<conio.h>
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
void main()
{
clrscr();
enum week today;
today=wednesday;
printf("%d day",today+1);
getch();
}