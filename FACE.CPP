 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 void main()
 {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	outtextxy(100,100,"\n \n \n \n \t \t SMILE IS THE GOOD FOR OUR LIFE ");
	setfillstyle(SOLID_FILL,MAGENTA);
	circle(300,230,100);
	floodfill(300,235,WHITE);

	setfillstyle(SOLID_FILL,LIGHTRED);
	circle(250,210,15);
	floodfill(250,215,WHITE);

	setfillstyle(SOLID_FILL,LIGHTRED);
	circle(350,210,15);
	floodfill(350,220,WHITE);

	arc(300,260,180,360,40);
	line(300,215,300,240);
	getch();
	closegraph();
}