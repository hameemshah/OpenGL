#include <graphics.h>
#include <iostream>
#include <windows.h>
#include <math.h>

int main() {
	int x, y, x1, y1, x2, y2, m, b, xend, yend;
	std::cout << "Enter x1 y1 & x2 y2 respectively = ";
	std::cin >> x1 >> y1 >> x2 >> y2;
	m = (y2 - y1) / (x2 - x1);
	b = y1 - (m * x1);
	if (x2 - x1 < 0) { x = x2; y = y2; xend = x1; yend = y1;}
	else { x = x1; y = y1; xend = x2; yend = y2; }
	initwindow(640, 480);
	while(x < xend || y < yend) {
		if(m <= 1) {
			x++;
			y = (m * x) + b;
			putpixel(x, y, RED);
		}
		if(m > 1) {
			y++;
			x = (y - b) / m;
			putpixel(x, y, GREEN);
		}
	}
	getch();
	return 0;
}
