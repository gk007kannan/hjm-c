#include<stdio.h>
#include<conio.h>
int main()
{
long g;
int count=0;
clrscr();
printf("\n enter the valuven of g");
scanf("\n %d",&g);
while(g!=0)
{
g=g/10;
++count;
}
printf("\n the counter of number is %d",count);
getch();
}

