/*Calculate grade */
#include<stdio.h>
#include<conio.h>
void main()
{
int phy,chem,bio,math,comp;
float p;
clrscr();
printf("Enter five subjects marks: ");
scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
p=(phy+chem+bio+math+comp)/5.0;
printf("Percentage=%.2f\n",p);
if(p>=90)
{
printf("Grade A");
}
else if(p>=80)
{
printf("Grade B");
}
else if(p>=70)
{
printf("Grade C");
}
else if(p>=60)
{
printf("Grade D");
}
else if(p>=40)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
getch();
}

