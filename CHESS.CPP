#include<conio.h>
#include<graphics.h>
void main()
{
int gd=0,gm;
int i=0,j,k=0;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(600,0,60,800);
for(j=0;j<=600;j=j+50)
	{
	for(;i<600;i=i+100)
		{
		bar(i,k,50+i,50+j);
		}
	k+=50 ;
	i=k-i-j;
	}
getch();
 }