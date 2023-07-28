#include <graphics.h>
//#include <iostream>
//#include <windows.h>
main () {
	initwindow(500, 500);
	setcolor(WHITE);
	circle(250, 250, 250);
	circle(125, 125, 70);
	circle(375, 125, 70);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, YELLOW);
	int pt [] = {0, 0, 120, 30, 30, 120};
	fillpoly(3, pt);
	int pt2 []= {500, 0, 500-120, 30, 500-30, 120};
	fillpoly(3, pt2);
	circle(125, 125, 5);
	circle(375, 125, 5);
	setcolor(YELLOW);
	line(250, 250, 250, 0);
	line(250 - 50, 250, 250 + 50, 250);
	line(250 - 80, 260, 250 + 80, 260);
	line(250 - 50, 270, 250 + 50, 270);
	ellipse(250, 375, 0, 360, 100, 50);
	getch();
	return 0;
}
