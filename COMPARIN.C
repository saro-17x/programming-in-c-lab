#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s1[20]="beginnersbook";
char s2[20]="beginnersbook.com";
if(strncmp(s1,s2,17)==0)
{
printf("string 1 and string 2 are equal");
}
else
{
printf("string 1 and string 2 are different");
}
getch();
}