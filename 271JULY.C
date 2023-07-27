/*Calculate profit & Loss */
#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp, amt;
clrscr();
printf("Enter cost price: ");
scanf("%d",&cp);
printf("Enter selling price: ");
scanf("%d",&sp);

if(sp>cp)
{
amt=sp-cp;
printf("Profit=%d", amt);
}
else if(cp>sp)
{
amt=cp-sp;
printf("Loss=%d",amt);
}
else
{
printf("No profit No loss.");
}
getch();
}

