#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n Enter the year:");
scanf("%d",&year);
if(year%4==0)
printf("\n %d is a leap year",year);
else
printf("\n %d is not a leap year",year);
getch();
}
